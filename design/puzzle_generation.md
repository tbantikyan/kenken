# Puzzle Generation

## Latin Square Generation

### Matrix Representation

#### Selected: 2x2 matrix
Pros:
- More readable code
- Intuitive traversal logic

Cons: 
- Negligible cache miss penalty

#### Alternative: 1D array
Pros: 
- Negligible caching benefits

Cons:
- Reduced readability
- Increased boilerplate (e.g. address conversion)

### Square Numbering

#### Selected: Jacobson-Matthews Algorithm (Markov Chain Monte Carlo method)

Pros:
- Faster than backtracking
- Completely random result
- Interesting

Cons:
- Slower than Option B

#### Alternative A: Backtracking
1. Iterate through matrix, trying a random value
2. If value violates constraint, try a different one
    - Backtrack as necessary. Use bitmap to track values tried for each step
3. If valid value, add to sets tracking values in that row and column

Pros: 
- Completely random result

Cons:
- Slow to execute (exponential time complexity)

#### Alternative B: Randomize standard Latin Square (by swapping)
1. Generate a Latin Square by:
    - Generate first row in natural order
    - Stagger all subsequent rows by shifting elements by one
2. Randomly swap rows and columns
3. Create random one-to-one mapping of numbers
4. Apply the mapping

Pros:
- Very fast to execute (O(n^2))

Cons:
- Not possible to get every possible Latin Square

## Cage Generation

#### Selected: Union-Find

Pros:
- More standard algorithm
- All shapes possible
- Easier to deal with single-cell corners

Cons:
- More uniform shapes likely

#### Alternative: DFS cells to grow cages
1. Loop through matrix, selecting unseen cell as "start cell"
2. DFS on unseen cells, marking each cell's group with ID of start cell

Pros:
- More unique shapes likely

Cons:
- Logic could become messy to deal with single-cell corners
- Some cage shapes would be impossible to generate


## Operation Selection

Specify likelihoods for each operation
- Cage sizes (max, min)
- Likelihood of choosing operation

## Puzzle Solving
- TODO

## Puzzle Identifier Encoding
- TODO

