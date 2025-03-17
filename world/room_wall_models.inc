# Desc : room_wall_models
# Authors : Gao jie
# Date : 2025.01.01

define modelBase model
(
  obstacle_return 1
  laser_return 1
  ranger_return 1
)

define wall1 modelBase (
  # These corresponds to the maximum x y and z of the table in meters.
  size [3.0 0.3 0.3]
  #color "gray50"
  block(
  points 8 
  point[0] [0.0  0.0]
  point[1] [3.0  0.0]
  point[2] [3.0  0.2]
  point[3] [2.0  0.2]
  point[4] [2.0  0.3]
  point[5] [1.0  0.3]
  point[6] [1.0  0.2]
  point[7] [0.0  0.2]
  z [ 0.0 0.3 ]
  )
)