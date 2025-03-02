project('kalyana-mittata', 'c',
  version : '0.1.0',
  default_options : ['warning_level=3', 'c_std=c11'],
  license : 'AGPL-3.0',
  meson_version : '>= 0.53.0'
)

# Find EFL dependencies
ecore = dependency('ecore')
evas = dependency('evas')
elementary = dependency('elementary')

# Specify include directories
inc_dirs = include_directories('src')

# Configure compilation
cc = meson.get_compiler('c')
add_project_arguments('-D_GNU_SOURCE', language: 'c')

# Add flag to avoid pthread barrier issue
add_project_arguments('-DHAVE_PTHREAD_BARRIER=0', language: 'c')

# Define source files
src_files = [
  'src/main.c',
]

# Create the executable
executable('kalyana-mittata',
  sources : src_files,
  include_directories : inc_dirs,
  dependencies : [ecore, evas, elementary],
  install : true,
)
