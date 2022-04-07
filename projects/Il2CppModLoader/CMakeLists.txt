project("Il2CppModLoader")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
	SOURCE_FILES
	"bootstrap.cpp"
	"console.cpp"
	"dll_main.cpp"
	"il2cpp_helpers.cpp"
	"interception.cpp"
)

set(
	PUBLIC_HEADER_FILES
	"console.h"
	"common.h"
	"constants.h"
	"framework.h"
	"il2cpp_helpers.h"
	"il2cpp_internals/il2cpp_internals.h"
	"il2cpp_internals/headers/il2cpp_internals_part0.h"
	"il2cpp_internals/headers/il2cpp_internals_part1.h"
	"il2cpp_internals/headers/il2cpp_internals_part2.h"
	"il2cpp_internals/headers/il2cpp_internals_part3.h"
	"il2cpp_internals/headers/il2cpp_internals_part4.h"
	"il2cpp_internals/headers/il2cpp_internals_part5.h"
	"il2cpp_internals/headers/il2cpp_internals_part6.h"
	"il2cpp_internals/headers/il2cpp_internals_part7.h"
	"il2cpp_internals/headers/il2cpp_internals_part8.h"
	"il2cpp_internals/headers/il2cpp_internals_part9.h"
	"il2cpp_internals/headers/il2cpp_internals_part10.h"
	"il2cpp_internals/headers/il2cpp_internals_part11.h"
	"il2cpp_internals/headers/il2cpp_internals_part12.h"
	"il2cpp_internals/headers/il2cpp_internals_part13.h"
	"il2cpp_internals/headers/il2cpp_internals_part14.h"
	"il2cpp_internals/headers/il2cpp_internals_part15.h"
	"il2cpp_internals/headers/il2cpp_internals_part16.h"
	"il2cpp_internals/headers/il2cpp_internals_part17.h"
	"il2cpp_internals/headers/il2cpp_internals_part18.h"
	"il2cpp_internals/headers/il2cpp_internals_part19.h"
	"il2cpp_internals/headers/il2cpp_internals_part20.h"
	"il2cpp_internals/headers/il2cpp_internals_part21.h"
	"il2cpp_internals/headers/il2cpp_internals_part22.h"
	"il2cpp_internals/headers/il2cpp_internals_part23.h"
	"il2cpp_internals/headers/il2cpp_internals_part24.h"
	"il2cpp_internals/headers/il2cpp_internals_part25.h"
	"il2cpp_internals/headers/il2cpp_internals_part26.h"
	"il2cpp_internals/headers/il2cpp_internals_part27.h"
	"il2cpp_internals/headers/il2cpp_internals_part28.h"
	"il2cpp_internals/headers/il2cpp_internals_part29.h"
	"il2cpp_internals/headers/il2cpp_internals_part30.h"
	"il2cpp_internals/headers/il2cpp_internals_part31.h"
	"il2cpp_internals/headers/il2cpp_internals_part32.h"
	"il2cpp_internals/headers/il2cpp_internals_part33.h"
	"il2cpp_internals/headers/il2cpp_internals_part34.h"
	"il2cpp_internals/headers/il2cpp_internals_part35.h"
	"il2cpp_internals/headers/il2cpp_internals_part36.h"
	"il2cpp_internals/headers/il2cpp_internals_part37.h"
	"il2cpp_internals/headers/il2cpp_internals_part38.h"
	"il2cpp_internals/headers/il2cpp_internals_part39.h"
	"il2cpp_internals/headers/il2cpp_internals_part40.h"
	"il2cpp_internals/headers/il2cpp_internals_part41.h"
	"il2cpp_internals/headers/il2cpp_internals_part42.h"
	"il2cpp_internals/headers/il2cpp_internals_part43.h"
	"il2cpp_internals/headers/il2cpp_internals_part44.h"
	"il2cpp_internals/headers/il2cpp_internals_part45.h"
	"il2cpp_internals/headers/il2cpp_internals_part46.h"
	"il2cpp_internals/headers/il2cpp_internals_part47.h"
	"il2cpp_internals/headers/il2cpp_internals_part48.h"
	"il2cpp_internals/headers/il2cpp_internals_part49.h"
	"il2cpp_internals/headers/il2cpp_internals_part50.h"
	"il2cpp_internals/headers/il2cpp_internals_part51.h"
	"il2cpp_internals/headers/il2cpp_internals_part52.h"
	"il2cpp_internals/headers/il2cpp_internals_part53.h"
	"il2cpp_internals/headers/il2cpp_internals_part54.h"
	"il2cpp_internals/headers/il2cpp_internals_part55.h"
	"il2cpp_internals/headers/il2cpp_internals_part56.h"
	"il2cpp_internals/headers/il2cpp_internals_part57.h"
	"il2cpp_internals/headers/il2cpp_internals_part58.h"
	"il2cpp_internals/headers/il2cpp_internals_part59.h"
	"il2cpp_internals/headers/il2cpp_internals_part60.h"
	"il2cpp_internals/headers/il2cpp_internals_part61.h"
	"il2cpp_internals/headers/il2cpp_internals_part62.h"
	"il2cpp_internals/headers/il2cpp_internals_part63.h"
	"il2cpp_internals/headers/il2cpp_internals_part64.h"
	"il2cpp_internals/headers/il2cpp_internals_part65.h"
	"il2cpp_internals/headers/il2cpp_internals_part66.h"
	"il2cpp_internals/headers/il2cpp_internals_part67.h"
	"il2cpp_internals/headers/il2cpp_internals_part68.h"
	"il2cpp_internals/headers/il2cpp_internals_part69.h"
	"il2cpp_internals/headers/il2cpp_internals_part70.h"
	"il2cpp_internals/headers/il2cpp_internals_part71.h"
	"il2cpp_internals/headers/il2cpp_internals_part72.h"
	"il2cpp_internals/headers/il2cpp_internals_part73.h"
	"il2cpp_internals/headers/il2cpp_internals_part74.h"
	"il2cpp_internals/headers/il2cpp_internals_part75.h"
	"il2cpp_internals/headers/il2cpp_internals_part76.h"
	"il2cpp_internals/headers/il2cpp_internals_part77.h"
	"il2cpp_internals/headers/il2cpp_internals_part78.h"
	"il2cpp_internals/headers/il2cpp_internals_part79.h"
	"il2cpp_internals/headers/il2cpp_internals_part80.h"
	"il2cpp_internals/headers/il2cpp_internals_part81.h"
	"il2cpp_internals/headers/il2cpp_internals_part82.h"
	"il2cpp_internals/headers/il2cpp_internals_part83.h"
	"il2cpp_internals/headers/il2cpp_internals_part84.h"
	"il2cpp_internals/headers/il2cpp_internals_part85.h"
	"il2cpp_internals/headers/il2cpp_internals_part86.h"
	"il2cpp_internals/headers/il2cpp_internals_part87.h"
	"il2cpp_internals/headers/il2cpp_internals_part88.h"
	"il2cpp_internals/headers/il2cpp_internals_part89.h"
	"il2cpp_internals/headers/il2cpp_internals_part90.h"
	"il2cpp_internals/headers/il2cpp_internals_part91.h"
	"il2cpp_internals/headers/il2cpp_internals_part92.h"
	"il2cpp_internals/headers/il2cpp_internals_part93.h"
	"il2cpp_internals/headers/il2cpp_internals_part94.h"
	"il2cpp_internals/headers/il2cpp_internals_part95.h"
	"il2cpp_internals/headers/il2cpp_internals_part96.h"
	"il2cpp_internals/headers/il2cpp_internals_part97.h"
	"il2cpp_internals/headers/il2cpp_internals_part98.h"
	"il2cpp_internals/headers/il2cpp_internals_part99.h"
	"il2cpp_internals/headers/il2cpp_internals_part100.h"
	"il2cpp_internals/headers/il2cpp_internals_part101.h"
	"il2cpp_internals/headers/il2cpp_internals_part102.h"
	"il2cpp_internals/headers/il2cpp_internals_part103.h"
	"il2cpp_internals/headers/il2cpp_internals_part104.h"
	"il2cpp_internals/headers/il2cpp_internals_part105.h"
	"il2cpp_internals/headers/il2cpp_internals_part106.h"
	"il2cpp_internals/headers/il2cpp_internals_part107.h"
	"il2cpp_internals/headers/il2cpp_internals_part108.h"
	"il2cpp_internals/headers/il2cpp_internals_part109.h"
	"il2cpp_internals/headers/il2cpp_internals_part110.h"
	"il2cpp_internals/headers/il2cpp_internals_part111.h"
	"il2cpp_internals/headers/il2cpp_internals_part112.h"
	"il2cpp_internals/headers/il2cpp_internals_part113.h"
	"il2cpp_internals/headers/il2cpp_internals_part114.h"
	"il2cpp_internals/headers/il2cpp_internals_part115.h"
	"il2cpp_internals/headers/il2cpp_internals_part116.h"
	"il2cpp_internals/headers/il2cpp_internals_part117.h"
	"il2cpp_internals/headers/il2cpp_internals_part118.h"
	"il2cpp_internals/headers/il2cpp_internals_part119.h"
	"il2cpp_internals/headers/il2cpp_internals_part120.h"
	"il2cpp_internals/headers/il2cpp_internals_part121.h"
	"il2cpp_internals/headers/il2cpp_internals_part122.h"
	"il2cpp_internals/headers/il2cpp_internals_part123.h"
	"il2cpp_internals/headers/il2cpp_internals_part124.h"
	"il2cpp_internals/headers/il2cpp_internals_part125.h"
	"il2cpp_internals/headers/il2cpp_internals_part126.h"
	"il2cpp_internals/headers/il2cpp_internals_part127.h"
	"il2cpp_internals/headers/il2cpp_internals_part128.h"
	"il2cpp_internals/headers/il2cpp_internals_part129.h"
	"il2cpp_internals/headers/il2cpp_internals_part130.h"
	"il2cpp_internals/headers/il2cpp_internals_part131.h"
	"il2cpp_internals/headers/il2cpp_internals_part132.h"
	"il2cpp_internals/headers/il2cpp_internals_part133.h"
	"il2cpp_internals/headers/il2cpp_internals_part134.h"
	"il2cpp_internals/headers/il2cpp_internals_part135.h"
	"il2cpp_internals/headers/il2cpp_internals_part136.h"
	"il2cpp_internals/headers/il2cpp_internals_part137.h"
	"il2cpp_internals/headers/il2cpp_internals_part138.h"
	"il2cpp_internals/headers/il2cpp_internals_part139.h"
	"il2cpp_internals/headers/il2cpp_internals_part140.h"
	"il2cpp_internals/headers/il2cpp_internals_part141.h"
	"il2cpp_internals/headers/il2cpp_internals_part142.h"
	"il2cpp_internals/headers/il2cpp_internals_part143.h"
	"il2cpp_internals/headers/il2cpp_internals_part144.h"
	"il2cpp_internals/headers/il2cpp_internals_part145.h"
	"il2cpp_internals/headers/il2cpp_internals_part146.h"
	"il2cpp_internals/headers/il2cpp_internals_part147.h"
	"il2cpp_internals/headers/il2cpp_internals_part148.h"
	"il2cpp_internals/headers/il2cpp_internals_part149.h"
	"il2cpp_internals/headers/il2cpp_internals_part150.h"
	"il2cpp_internals/headers/il2cpp_internals_part151.h"
	"il2cpp_internals/headers/il2cpp_internals_part152.h"
	"il2cpp_internals/headers/il2cpp_internals_part153.h"
	"il2cpp_internals/headers/il2cpp_internals_part154.h"
	"il2cpp_internals/headers/il2cpp_internals_part155.h"
	"il2cpp_internals/headers/il2cpp_internals_part156.h"
	"il2cpp_internals/headers/il2cpp_internals_part157.h"
	"il2cpp_internals/headers/il2cpp_internals_part158.h"
	"il2cpp_internals/headers/il2cpp_internals_part159.h"
	"il2cpp_internals/headers/il2cpp_internals_part160.h"
	"il2cpp_internals/headers/il2cpp_internals_part161.h"
	"il2cpp_internals/headers/il2cpp_internals_part162.h"
	"il2cpp_internals/headers/il2cpp_internals_part163.h"
	"il2cpp_internals/headers/il2cpp_internals_part164.h"
	"il2cpp_internals/headers/il2cpp_internals_part165.h"
	"il2cpp_internals/headers/il2cpp_internals_part166.h"
	"il2cpp_internals/headers/il2cpp_internals_part167.h"
	"il2cpp_internals/headers/il2cpp_internals_part168.h"
	"il2cpp_internals/headers/il2cpp_internals_part169.h"
	"il2cpp_internals/headers/il2cpp_internals_part170.h"
	"il2cpp_internals/headers/il2cpp_internals_part171.h"
	"il2cpp_internals/headers/il2cpp_internals_part172.h"
	"il2cpp_internals/headers/il2cpp_internals_part173.h"
	"il2cpp_internals/headers/il2cpp_internals_part174.h"
	"il2cpp_internals/headers/il2cpp_internals_part175.h"
	"il2cpp_internals/headers/il2cpp_internals_part176.h"
	"il2cpp_internals/headers/il2cpp_internals_part177.h"
	"il2cpp_internals/headers/il2cpp_internals_part178.h"
	"il2cpp_internals/headers/il2cpp_internals_part179.h"
	"il2cpp_internals/headers/il2cpp_internals_part180.h"
	"il2cpp_internals/headers/il2cpp_internals_part181.h"
	"il2cpp_internals/headers/il2cpp_internals_part182.h"
	"il2cpp_internals/headers/il2cpp_internals_part183.h"
	"il2cpp_internals/headers/il2cpp_internals_part184.h"
	"il2cpp_internals/headers/il2cpp_internals_part185.h"
	"il2cpp_internals/headers/il2cpp_internals_part186.h"
	"il2cpp_internals/headers/il2cpp_internals_part187.h"
	"il2cpp_internals/headers/il2cpp_internals_part188.h"
	"il2cpp_internals/headers/il2cpp_internals_part189.h"
	"il2cpp_internals/headers/il2cpp_internals_part190.h"
	"il2cpp_internals/headers/il2cpp_internals_part191.h"
	"il2cpp_internals/headers/il2cpp_internals_part192.h"
	"il2cpp_internals/headers/il2cpp_internals_part193.h"
	"il2cpp_internals/headers/il2cpp_internals_part194.h"
	"il2cpp_internals/headers/il2cpp_internals_part195.h"
	"il2cpp_internals/headers/il2cpp_internals_part196.h"
	"il2cpp_internals/headers/il2cpp_internals_part197.h"
	"il2cpp_internals/headers/il2cpp_internals_part198.h"
	"il2cpp_internals/headers/il2cpp_internals_part199.h"
	"il2cpp_internals/headers/il2cpp_internals_part200.h"
	"il2cpp_internals/headers/il2cpp_internals_part201.h"
	"il2cpp_internals/headers/il2cpp_internals_part202.h"
	"il2cpp_internals/headers/il2cpp_internals_part203.h"
	"il2cpp_internals/headers/il2cpp_internals_part204.h"
	"il2cpp_internals/headers/il2cpp_internals_part205.h"
	"il2cpp_internals/headers/il2cpp_internals_part206.h"
	"il2cpp_internals/headers/il2cpp_internals_part207.h"
	"il2cpp_internals/headers/il2cpp_internals_part208.h"
	"il2cpp_internals/headers/il2cpp_internals_part209.h"
	"il2cpp_internals/headers/il2cpp_internals_part210.h"
	"il2cpp_internals/headers/il2cpp_internals_part211.h"
	"il2cpp_internals/headers/il2cpp_internals_part212.h"
	"il2cpp_internals/headers/il2cpp_internals_part213.h"
	"il2cpp_internals/headers/il2cpp_internals_part214.h"
	"il2cpp_internals/headers/il2cpp_internals_part215.h"
	"il2cpp_internals/headers/il2cpp_internals_part216.h"
	"il2cpp_internals/headers/il2cpp_internals_part217.h"
	"il2cpp_internals/headers/il2cpp_internals_part218.h"
	"il2cpp_internals/headers/il2cpp_internals_part219.h"
	"il2cpp_internals/headers/il2cpp_internals_part220.h"
	"il2cpp_internals/headers/il2cpp_internals_part221.h"
	"il2cpp_internals/headers/il2cpp_internals_part222.h"
	"il2cpp_internals/headers/il2cpp_internals_part223.h"
	"il2cpp_internals/headers/il2cpp_internals_part224.h"
	"il2cpp_internals/headers/il2cpp_internals_part225.h"
	"il2cpp_internals/headers/il2cpp_internals_part226.h"
	"il2cpp_internals/headers/il2cpp_internals_part227.h"
	"il2cpp_internals/headers/il2cpp_internals_part228.h"
	"il2cpp_internals/headers/il2cpp_internals_part229.h"
	"il2cpp_internals/headers/il2cpp_internals_part230.h"
	"il2cpp_internals/headers/il2cpp_internals_part231.h"
	"il2cpp_internals/headers/il2cpp_internals_part232.h"
	"il2cpp_internals/headers/il2cpp_internals_part233.h"
	"il2cpp_internals/headers/il2cpp_internals_part234.h"
	"il2cpp_internals/headers/il2cpp_internals_part235.h"
	"il2cpp_internals/headers/il2cpp_internals_part236.h"
	"il2cpp_internals/headers/il2cpp_internals_part237.h"
	"il2cpp_internals/headers/il2cpp_internals_part238.h"
	"il2cpp_internals/headers/il2cpp_internals_part239.h"
	"il2cpp_internals/headers/il2cpp_internals_part240.h"
	"il2cpp_internals/headers/il2cpp_internals_part241.h"
	"il2cpp_internals/headers/il2cpp_internals_part242.h"
	"il2cpp_internals/headers/il2cpp_internals_part243.h"
	"il2cpp_internals/headers/il2cpp_internals_part244.h"
	"il2cpp_internals/headers/il2cpp_internals_part245.h"
	"il2cpp_internals/headers/il2cpp_internals_part246.h"
	"il2cpp_internals/headers/il2cpp_internals_part247.h"
	"il2cpp_internals/headers/il2cpp_internals_part248.h"
	"il2cpp_internals/headers/il2cpp_internals_part249.h"
	"il2cpp_internals/headers/il2cpp_internals_part250.h"
	"il2cpp_internals/headers/il2cpp_internals_part251.h"
	"il2cpp_internals/headers/il2cpp_internals_part252.h"
	"il2cpp_internals/headers/il2cpp_internals_part253.h"
	"il2cpp_internals/headers/il2cpp_internals_part254.h"
	"il2cpp_internals/headers/il2cpp_internals_part255.h"
	"il2cpp_internals/headers/il2cpp_internals_part256.h"
	"il2cpp_internals/headers/il2cpp_internals_part257.h"
	"il2cpp_internals/headers/il2cpp_internals_part258.h"
	"il2cpp_internals/headers/il2cpp_internals_part259.h"
	"il2cpp_internals/headers/il2cpp_internals_part260.h"
	"il2cpp_internals/headers/il2cpp_internals_part261.h"
	"il2cpp_internals/headers/il2cpp_internals_part262.h"
	"il2cpp_internals/headers/il2cpp_internals_part263.h"
	"il2cpp_internals/headers/il2cpp_internals_part264.h"
	"il2cpp_internals/headers/il2cpp_internals_part265.h"
	"il2cpp_internals/headers/il2cpp_internals_part266.h"
	"il2cpp_internals/headers/il2cpp_internals_part267.h"
	"il2cpp_internals/headers/il2cpp_internals_part268.h"
	"il2cpp_internals/headers/il2cpp_internals_part269.h"
	"il2cpp_internals/headers/il2cpp_internals_part270.h"
	"il2cpp_internals/headers/il2cpp_internals_part271.h"
	"il2cpp_internals/headers/il2cpp_internals_part272.h"
	"il2cpp_internals/headers/il2cpp_internals_part273.h"
	"il2cpp_internals/headers/il2cpp_internals_part274.h"
	"il2cpp_internals/headers/il2cpp_internals_part275.h"
	"il2cpp_internals/headers/il2cpp_internals_part276.h"
	"il2cpp_internals/headers/il2cpp_internals_part277.h"
	"il2cpp_internals/headers/il2cpp_internals_part278.h"
	"il2cpp_internals/headers/il2cpp_internals_part279.h"
	"il2cpp_internals/headers/il2cpp_internals_part280.h"
	"il2cpp_internals/headers/il2cpp_internals_part281.h"
	"il2cpp_internals/headers/il2cpp_internals_part282.h"
	"il2cpp_internals/headers/il2cpp_internals_part283.h"
	"il2cpp_internals/headers/il2cpp_internals_part284.h"
	"il2cpp_internals/headers/il2cpp_internals_part285.h"
	"il2cpp_internals/headers/il2cpp_internals_part286.h"
	"il2cpp_internals/headers/il2cpp_internals_part287.h"
	"il2cpp_internals/headers/il2cpp_internals_part288.h"
	"il2cpp_internals/headers/il2cpp_internals_part289.h"
	"il2cpp_internals/headers/il2cpp_internals_part290.h"
	"il2cpp_internals/headers/il2cpp_internals_part291.h"
	"il2cpp_internals/headers/il2cpp_internals_part292.h"
	"il2cpp_internals/headers/il2cpp_internals_part293.h"
	"il2cpp_internals/headers/il2cpp_internals_part294.h"
	"il2cpp_internals/headers/il2cpp_internals_part295.h"
	"il2cpp_internals/headers/il2cpp_internals_part296.h"
	"il2cpp_internals/headers/il2cpp_internals_part297.h"
	"il2cpp_internals/headers/il2cpp_internals_part298.h"
	"il2cpp_internals/headers/il2cpp_internals_part299.h"
	"il2cpp_internals/headers/il2cpp_internals_part300.h"
	"il2cpp_internals/headers/il2cpp_internals_part301.h"
	"il2cpp_internals/headers/il2cpp_internals_part302.h"
	"il2cpp_internals/headers/il2cpp_internals_part303.h"
	"il2cpp_internals/headers/il2cpp_internals_part304.h"
	"il2cpp_internals/headers/il2cpp_internals_part305.h"
	"il2cpp_internals/headers/il2cpp_internals_part306.h"
	"il2cpp_internals/headers/il2cpp_internals_part307.h"
	"il2cpp_internals/headers/il2cpp_internals_part308.h"
	"il2cpp_internals/headers/il2cpp_internals_part309.h"
	"il2cpp_internals/headers/il2cpp_internals_part310.h"
	"il2cpp_internals/headers/il2cpp_internals_part311.h"
	"il2cpp_internals/headers/il2cpp_internals_part312.h"
	"il2cpp_internals/headers/il2cpp_internals_part313.h"
	"il2cpp_internals/headers/il2cpp_internals_part314.h"
	"il2cpp_internals/headers/il2cpp_internals_part315.h"
	"il2cpp_internals/headers/il2cpp_internals_part316.h"
	"il2cpp_internals/headers/il2cpp_internals_part317.h"
	"il2cpp_internals/headers/il2cpp_internals_part318.h"
	"il2cpp_internals/headers/il2cpp_internals_part319.h"
	"il2cpp_internals/headers/il2cpp_internals_part320.h"
	"il2cpp_internals/headers/il2cpp_internals_part321.h"
	"il2cpp_internals/headers/il2cpp_internals_part322.h"
	"il2cpp_internals/headers/il2cpp_internals_part323.h"
	"il2cpp_internals/headers/il2cpp_internals_part324.h"
	"il2cpp_internals/headers/il2cpp_internals_part325.h"
	"il2cpp_internals/headers/il2cpp_internals_part326.h"
	"il2cpp_internals/headers/il2cpp_internals_part327.h"
	"il2cpp_internals/headers/il2cpp_internals_part328.h"
	"il2cpp_internals/headers/il2cpp_internals_part329.h"
	"il2cpp_internals/headers/il2cpp_internals_part330.h"
	"il2cpp_internals/headers/il2cpp_internals_part331.h"
	"il2cpp_internals/headers/il2cpp_internals_part332.h"
	"il2cpp_internals/headers/il2cpp_internals_part333.h"
	"il2cpp_internals/headers/il2cpp_internals_part334.h"
	"il2cpp_internals/headers/il2cpp_internals_part335.h"
	"il2cpp_internals/headers/il2cpp_internals_part336.h"
	"il2cpp_internals/headers/il2cpp_internals_part337.h"
	"il2cpp_internals/headers/il2cpp_internals_part338.h"
	"il2cpp_internals/headers/il2cpp_internals_part339.h"
	"il2cpp_internals/headers/il2cpp_internals_part340.h"
	"il2cpp_internals/headers/il2cpp_internals_part341.h"
	"il2cpp_internals/headers/il2cpp_internals_part342.h"
	"il2cpp_internals/headers/il2cpp_internals_part343.h"
	"il2cpp_internals/headers/il2cpp_internals_part344.h"
	"il2cpp_internals/headers/il2cpp_internals_part345.h"
	"il2cpp_internals/headers/il2cpp_internals_part346.h"
	"il2cpp_internals/headers/il2cpp_internals_part347.h"
	"il2cpp_internals/headers/il2cpp_internals_part348.h"
	"il2cpp_internals/headers/il2cpp_internals_part349.h"
	"il2cpp_internals/headers/il2cpp_internals_part350.h"
	"il2cpp_internals/headers/il2cpp_internals_part351.h"
	"il2cpp_internals/headers/il2cpp_internals_part352.h"
	"il2cpp_internals/headers/il2cpp_internals_part353.h"
	"il2cpp_internals/headers/il2cpp_internals_part354.h"
	"il2cpp_internals/headers/il2cpp_internals_part355.h"
	"il2cpp_internals/headers/il2cpp_internals_part356.h"
	"il2cpp_internals/headers/il2cpp_internals_part357.h"
	"il2cpp_internals/headers/il2cpp_internals_part358.h"
	"il2cpp_internals/headers/il2cpp_internals_part359.h"
	"il2cpp_internals/headers/il2cpp_internals_part360.h"
	"il2cpp_internals/headers/il2cpp_internals_part361.h"
	"il2cpp_internals/headers/il2cpp_internals_part362.h"
	"il2cpp_internals/headers/il2cpp_internals_part363.h"
	"il2cpp_internals/headers/il2cpp_internals_part364.h"
	"il2cpp_internals/headers/il2cpp_internals_part365.h"
	"il2cpp_internals/headers/il2cpp_internals_part366.h"
	"il2cpp_internals/headers/il2cpp_internals_part367.h"
	"il2cpp_internals/headers/il2cpp_internals_part368.h"
	"il2cpp_internals/headers/il2cpp_internals_part369.h"
	"il2cpp_internals/headers/il2cpp_internals_part370.h"
	"il2cpp_internals/headers/il2cpp_internals_part371.h"
	"il2cpp_internals/headers/il2cpp_internals_part372.h"
	"il2cpp_internals/headers/il2cpp_internals_part373.h"
	"il2cpp_internals/headers/il2cpp_internals_part374.h"
	"il2cpp_internals/headers/il2cpp_internals_part375.h"
	"il2cpp_internals/headers/il2cpp_internals_part376.h"
	"il2cpp_internals/headers/il2cpp_internals_part377.h"
	"il2cpp_internals/headers/il2cpp_internals_part378.h"
	"il2cpp_internals/headers/il2cpp_internals_part379.h"
	"il2cpp_internals/headers/il2cpp_internals_part380.h"
	"il2cpp_internals/headers/il2cpp_internals_part381.h"
	"il2cpp_internals/headers/il2cpp_internals_part382.h"
	"il2cpp_internals/headers/il2cpp_internals_part383.h"
	"il2cpp_internals/headers/il2cpp_internals_part384.h"
	"il2cpp_internals/headers/il2cpp_internals_part385.h"
	"il2cpp_internals/headers/il2cpp_internals_part386.h"
	"il2cpp_internals/headers/il2cpp_internals_part387.h"
	"il2cpp_internals/headers/il2cpp_internals_part388.h"
	"il2cpp_internals/headers/il2cpp_internals_part389.h"
	"il2cpp_internals/headers/il2cpp_internals_part390.h"
	"il2cpp_internals/headers/il2cpp_internals_part391.h"
	"il2cpp_internals/headers/il2cpp_internals_part392.h"
	"il2cpp_internals/headers/il2cpp_internals_part393.h"
	"il2cpp_internals/headers/il2cpp_internals_part394.h"
	"il2cpp_internals/headers/il2cpp_internals_part395.h"
	"il2cpp_internals/headers/il2cpp_internals_part396.h"
	"il2cpp_internals/headers/il2cpp_internals_part397.h"
	"il2cpp_internals/headers/il2cpp_internals_part398.h"
	"il2cpp_internals/headers/il2cpp_internals_part399.h"
	"il2cpp_internals/headers/il2cpp_internals_part400.h"
	"il2cpp_internals/headers/il2cpp_internals_part401.h"
	"il2cpp_internals/headers/il2cpp_internals_part402.h"
	"il2cpp_internals/headers/il2cpp_internals_part403.h"
	"il2cpp_internals/headers/il2cpp_internals_part404.h"
	"il2cpp_internals/headers/il2cpp_internals_part405.h"
	"il2cpp_internals/headers/il2cpp_internals_part406.h"
	"il2cpp_internals/headers/il2cpp_internals_part407.h"
	"il2cpp_internals/headers/il2cpp_internals_part408.h"
	"il2cpp_internals/headers/il2cpp_internals_part409.h"
	"il2cpp_internals/headers/il2cpp_internals_part410.h"
	"il2cpp_internals/headers/il2cpp_internals_part411.h"
	"il2cpp_internals/headers/il2cpp_internals_part412.h"
	"il2cpp_internals/headers/il2cpp_internals_part413.h"
	"il2cpp_internals/headers/il2cpp_internals_part414.h"
	"il2cpp_internals/headers/il2cpp_internals_part415.h"
	"il2cpp_internals/headers/il2cpp_internals_part416.h"
	"il2cpp_internals/headers/il2cpp_internals_part417.h"
	"il2cpp_internals/headers/il2cpp_internals_part418.h"
	"il2cpp_internals/headers/il2cpp_internals_part419.h"
	"il2cpp_internals/headers/il2cpp_internals_part420.h"
	"il2cpp_internals/headers/il2cpp_internals_part421.h"
	"il2cpp_internals/headers/il2cpp_internals_part422.h"
	"il2cpp_internals/headers/il2cpp_internals_part423.h"
	"il2cpp_internals/headers/il2cpp_internals_part424.h"
	"il2cpp_internals/headers/il2cpp_internals_part425.h"
	"il2cpp_internals/headers/il2cpp_internals_part426.h"
	"il2cpp_internals/headers/il2cpp_internals_part427.h"
	"il2cpp_internals/headers/il2cpp_internals_part428.h"
	"il2cpp_internals/headers/il2cpp_internals_part429.h"
	"il2cpp_internals/headers/il2cpp_internals_part430.h"
	"il2cpp_internals/headers/il2cpp_internals_part431.h"
	"il2cpp_internals/headers/il2cpp_internals_part432.h"
	"il2cpp_internals/headers/il2cpp_internals_part433.h"
	"il2cpp_internals/headers/il2cpp_internals_part434.h"
	"il2cpp_internals/headers/il2cpp_internals_part435.h"
	"il2cpp_internals/headers/il2cpp_internals_part436.h"
	"il2cpp_internals/headers/il2cpp_internals_part437.h"
	"il2cpp_internals/headers/il2cpp_internals_part438.h"
	"il2cpp_internals/headers/il2cpp_internals_part439.h"
	"il2cpp_internals/headers/il2cpp_internals_part440.h"
	"il2cpp_internals/headers/il2cpp_internals_part441.h"
	"il2cpp_internals/headers/il2cpp_internals_part442.h"
	"il2cpp_internals/headers/il2cpp_internals_part443.h"
	"il2cpp_internals/headers/il2cpp_internals_part444.h"
	"il2cpp_internals/headers/il2cpp_internals_part445.h"
	"il2cpp_internals/headers/il2cpp_internals_part446.h"
	"il2cpp_internals/headers/il2cpp_internals_part447.h"
	"il2cpp_internals/headers/il2cpp_internals_part448.h"
	"il2cpp_internals/headers/il2cpp_internals_part449.h"
	"il2cpp_internals/headers/il2cpp_internals_part450.h"
	"il2cpp_internals/headers/il2cpp_internals_part451.h"
	"il2cpp_internals/headers/il2cpp_internals_part452.h"
	"il2cpp_internals/headers/il2cpp_internals_part453.h"
	"il2cpp_internals/headers/il2cpp_internals_part454.h"
	"il2cpp_internals/headers/il2cpp_internals_part455.h"
	"il2cpp_internals/headers/il2cpp_internals_part456.h"
	"il2cpp_internals/headers/il2cpp_internals_part457.h"
	"il2cpp_internals/headers/il2cpp_internals_part458.h"
	"il2cpp_internals/headers/il2cpp_internals_part459.h"
	"il2cpp_internals/headers/il2cpp_internals_part460.h"
	"il2cpp_internals/headers/il2cpp_internals_part461.h"
	"il2cpp_internals/headers/il2cpp_internals_part462.h"
	"il2cpp_internals/headers/il2cpp_internals_part463.h"
	"il2cpp_internals/headers/il2cpp_internals_part464.h"
	"il2cpp_internals/headers/il2cpp_internals_part465.h"
	"il2cpp_internals/headers/il2cpp_internals_part466.h"
	"il2cpp_internals/headers/il2cpp_internals_part467.h"
	"il2cpp_internals/headers/il2cpp_internals_part468.h"
	"il2cpp_internals/headers/il2cpp_internals_part469.h"
	"il2cpp_internals/headers/il2cpp_internals_part470.h"
	"il2cpp_internals/headers/il2cpp_internals_part471.h"
	"il2cpp_internals/headers/il2cpp_internals_part472.h"
	"il2cpp_internals/headers/il2cpp_internals_part473.h"
	"il2cpp_internals/headers/il2cpp_internals_part474.h"
	"il2cpp_internals/headers/il2cpp_internals_part475.h"
	"il2cpp_internals/headers/il2cpp_internals_part476.h"
	"il2cpp_internals/headers/il2cpp_internals_part477.h"
	"il2cpp_internals/headers/il2cpp_internals_part478.h"
	"il2cpp_internals/headers/il2cpp_internals_part479.h"
	"il2cpp_internals/headers/il2cpp_internals_part480.h"
	"il2cpp_internals/headers/il2cpp_internals_part481.h"
	"il2cpp_internals/headers/il2cpp_internals_part482.h"
	"il2cpp_internals/headers/il2cpp_internals_part483.h"
	"il2cpp_internals/headers/il2cpp_internals_part484.h"
	"il2cpp_internals/headers/il2cpp_internals_part485.h"
	"il2cpp_internals/headers/il2cpp_internals_part486.h"
	"il2cpp_internals/headers/il2cpp_internals_part487.h"
	"il2cpp_internals/headers/il2cpp_internals_part488.h"
	"il2cpp_internals/headers/il2cpp_internals_part489.h"
	"il2cpp_internals/headers/il2cpp_internals_part490.h"
	"il2cpp_internals/headers/il2cpp_internals_part491.h"
	"il2cpp_internals/headers/il2cpp_internals_part492.h"
	"il2cpp_internals/headers/il2cpp_internals_part493.h"
	"il2cpp_internals/headers/il2cpp_internals_part494.h"
	"il2cpp_internals/headers/il2cpp_internals_part495.h"
	"il2cpp_internals/headers/il2cpp_internals_part496.h"
	"il2cpp_internals/headers/il2cpp_internals_part497.h"
	"il2cpp_internals/headers/il2cpp_internals_part498.h"
	"il2cpp_internals/headers/il2cpp_internals_part499.h"
	"il2cpp_internals/headers/il2cpp_internals_part500.h"
	"il2cpp_internals/headers/il2cpp_internals_part501.h"
	"il2cpp_internals/headers/il2cpp_internals_part502.h"
	"il2cpp_internals/headers/il2cpp_internals_part503.h"
	"il2cpp_internals/headers/il2cpp_internals_part504.h"
	"il2cpp_internals/headers/il2cpp_internals_part505.h"
	"il2cpp_internals/headers/il2cpp_internals_part506.h"
	"il2cpp_internals/headers/il2cpp_internals_part507.h"
	"il2cpp_internals/headers/il2cpp_internals_part508.h"
	"il2cpp_internals/headers/il2cpp_internals_part509.h"
	"il2cpp_internals/headers/il2cpp_internals_part510.h"
	"il2cpp_internals/headers/il2cpp_internals_part511.h"
	"il2cpp_internals/headers/il2cpp_internals_part512.h"
	"il2cpp_internals/headers/il2cpp_internals_part513.h"
	"il2cpp_internals/headers/il2cpp_internals_part514.h"
	"il2cpp_internals/headers/il2cpp_internals_part515.h"
	"il2cpp_internals/headers/il2cpp_internals_part516.h"
	"il2cpp_internals/headers/il2cpp_internals_part517.h"
	"il2cpp_internals/headers/il2cpp_internals_part518.h"
	"il2cpp_internals/headers/il2cpp_internals_part519.h"
	"il2cpp_internals/headers/il2cpp_internals_part520.h"
	"il2cpp_internals/headers/il2cpp_internals_part521.h"
	"il2cpp_internals/headers/il2cpp_internals_part522.h"
	"il2cpp_internals/headers/il2cpp_internals_part523.h"
	"il2cpp_internals/headers/il2cpp_internals_part524.h"
	"il2cpp_internals/headers/il2cpp_internals_part525.h"
	"il2cpp_internals/headers/il2cpp_internals_part526.h"
	"il2cpp_internals/headers/il2cpp_internals_part527.h"
	"il2cpp_internals/headers/il2cpp_internals_part528.h"
	"il2cpp_internals/headers/il2cpp_internals_part529.h"
	"il2cpp_internals/headers/il2cpp_internals_part530.h"
	"il2cpp_internals/headers/il2cpp_internals_part531.h"
	"il2cpp_internals/headers/il2cpp_internals_part532.h"
	"il2cpp_internals/headers/il2cpp_internals_part533.h"
	"il2cpp_internals/headers/il2cpp_internals_part534.h"
	"il2cpp_internals/headers/il2cpp_internals_part535.h"
	"il2cpp_internals/headers/il2cpp_internals_part536.h"
	"il2cpp_internals/headers/il2cpp_internals_part537.h"
	"il2cpp_internals/headers/il2cpp_internals_part538.h"
	"il2cpp_internals/headers/il2cpp_internals_part539.h"
	"il2cpp_internals/headers/il2cpp_internals_part540.h"
	"il2cpp_internals/headers/il2cpp_internals_part541.h"
	"il2cpp_internals/headers/il2cpp_internals_part542.h"
	"il2cpp_internals/headers/il2cpp_internals_part543.h"
	"il2cpp_internals/headers/il2cpp_internals_part544.h"
	"il2cpp_internals/headers/il2cpp_internals_part545.h"
	"il2cpp_internals/headers/il2cpp_internals_part546.h"
	"il2cpp_internals/headers/il2cpp_internals_part547.h"
	"il2cpp_internals/headers/il2cpp_internals_part548.h"
	"il2cpp_internals/headers/il2cpp_internals_part549.h"
	"il2cpp_internals/headers/il2cpp_internals_part550.h"
	"il2cpp_internals/headers/il2cpp_internals_part551.h"
	"il2cpp_internals/headers/il2cpp_internals_part552.h"
	"il2cpp_internals/headers/il2cpp_internals_part553.h"
	"il2cpp_internals/headers/il2cpp_internals_part554.h"
	"il2cpp_internals/headers/il2cpp_internals_part555.h"
	"il2cpp_internals/headers/il2cpp_internals_part556.h"
	"il2cpp_internals/headers/il2cpp_internals_part557.h"
	"il2cpp_internals/headers/il2cpp_internals_part558.h"
	"il2cpp_internals/headers/il2cpp_internals_part559.h"
	"il2cpp_internals/headers/il2cpp_internals_part560.h"
	"il2cpp_internals/headers/il2cpp_internals_part561.h"
	"il2cpp_internals/headers/il2cpp_internals_part562.h"
	"il2cpp_internals/headers/il2cpp_internals_part563.h"
	"il2cpp_internals/headers/il2cpp_internals_part564.h"
	"il2cpp_internals/headers/il2cpp_internals_part565.h"
	"il2cpp_internals/headers/il2cpp_internals_part566.h"
	"il2cpp_internals/headers/il2cpp_internals_part567.h"
	"il2cpp_internals/headers/il2cpp_internals_part568.h"
	"il2cpp_internals/headers/il2cpp_internals_part569.h"
	"il2cpp_internals/headers/il2cpp_internals_part570.h"
	"il2cpp_internals/headers/il2cpp_internals_part571.h"
	"il2cpp_internals/headers/il2cpp_internals_part572.h"
	"il2cpp_internals/headers/il2cpp_internals_part573.h"
	"il2cpp_internals/headers/il2cpp_internals_part574.h"
	"il2cpp_internals/headers/il2cpp_internals_part575.h"
	"il2cpp_internals/headers/il2cpp_internals_part576.h"
	"il2cpp_internals/headers/il2cpp_internals_part577.h"
	"il2cpp_internals/headers/il2cpp_internals_part578.h"
	"il2cpp_internals/headers/il2cpp_internals_part579.h"
	"il2cpp_internals/headers/il2cpp_internals_part580.h"
	"il2cpp_internals/headers/il2cpp_internals_part581.h"
	"il2cpp_internals/headers/il2cpp_internals_part582.h"
	"il2cpp_internals/headers/il2cpp_internals_part583.h"
	"il2cpp_internals/headers/il2cpp_internals_part584.h"
	"il2cpp_internals/headers/il2cpp_internals_part585.h"
	"il2cpp_internals/headers/il2cpp_internals_part586.h"
	"il2cpp_internals/headers/il2cpp_internals_part587.h"
	"il2cpp_internals/headers/il2cpp_internals_part588.h"
	"il2cpp_internals/headers/il2cpp_internals_part589.h"
	"il2cpp_internals/headers/il2cpp_internals_part590.h"
	"il2cpp_internals/headers/il2cpp_internals_part591.h"
	"il2cpp_internals/headers/il2cpp_internals_part592.h"
	"il2cpp_internals/headers/il2cpp_internals_part593.h"
	"il2cpp_internals/headers/il2cpp_internals_part594.h"
	"il2cpp_internals/headers/il2cpp_internals_part595.h"
	"il2cpp_internals/headers/il2cpp_internals_part596.h"
	"il2cpp_internals/headers/il2cpp_internals_part597.h"
	"il2cpp_internals/headers/il2cpp_internals_part598.h"
	"il2cpp_internals/headers/il2cpp_internals_part599.h"
	"il2cpp_internals/headers/il2cpp_internals_part600.h"
	"il2cpp_internals/headers/il2cpp_internals_part601.h"
	"il2cpp_internals/headers/il2cpp_internals_part602.h"
	"il2cpp_internals/headers/il2cpp_internals_part603.h"
	"il2cpp_internals/headers/il2cpp_internals_part604.h"
	"il2cpp_internals/headers/il2cpp_internals_part605.h"
	"il2cpp_internals/headers/il2cpp_internals_part606.h"
	"il2cpp_internals/headers/il2cpp_internals_part607.h"
	"il2cpp_internals/headers/il2cpp_internals_part608.h"
	"il2cpp_internals/headers/il2cpp_internals_part609.h"
	"il2cpp_internals/headers/il2cpp_internals_part610.h"
	"il2cpp_internals/headers/il2cpp_internals_part611.h"
	"il2cpp_internals/headers/il2cpp_internals_part612.h"
	"il2cpp_internals/headers/il2cpp_internals_part613.h"
	"il2cpp_internals/headers/il2cpp_internals_part614.h"
	"il2cpp_internals/headers/il2cpp_internals_part615.h"
	"il2cpp_internals/headers/il2cpp_internals_part616.h"
	"il2cpp_internals/headers/il2cpp_internals_part617.h"
	"il2cpp_internals/headers/il2cpp_internals_part618.h"
	"il2cpp_internals/headers/il2cpp_internals_part619.h"
	"il2cpp_internals/headers/il2cpp_internals_part620.h"
	"il2cpp_internals/headers/il2cpp_internals_part621.h"
	"il2cpp_internals/headers/il2cpp_internals_part622.h"
	"il2cpp_internals/headers/il2cpp_internals_part623.h"
	"il2cpp_internals/headers/il2cpp_internals_part624.h"
	"il2cpp_internals/headers/il2cpp_internals_part625.h"
	"il2cpp_internals/headers/il2cpp_internals_part626.h"
	"il2cpp_internals/headers/il2cpp_internals_part627.h"
	"il2cpp_internals/headers/il2cpp_internals_part628.h"
	"il2cpp_internals/headers/il2cpp_internals_part629.h"
	"il2cpp_internals/headers/il2cpp_internals_part630.h"
	"il2cpp_internals/headers/il2cpp_internals_part631.h"
	"il2cpp_internals/headers/il2cpp_internals_part632.h"
	"il2cpp_internals/headers/il2cpp_internals_part633.h"
	"il2cpp_internals/headers/il2cpp_internals_part634.h"
	"il2cpp_internals/headers/il2cpp_internals_part635.h"
	"il2cpp_internals/headers/il2cpp_internals_part636.h"
	"il2cpp_internals/headers/il2cpp_internals_part637.h"
	"il2cpp_internals/headers/il2cpp_internals_part638.h"
	"il2cpp_internals/headers/il2cpp_internals_part639.h"
	"il2cpp_internals/headers/il2cpp_internals_part640.h"
	"il2cpp_internals/headers/il2cpp_internals_part641.h"
	"il2cpp_internals/headers/il2cpp_internals_part642.h"
	"il2cpp_internals/headers/il2cpp_internals_part643.h"
	"il2cpp_internals/headers/il2cpp_internals_part644.h"
	"il2cpp_internals/headers/il2cpp_internals_part645.h"
	"il2cpp_internals/headers/il2cpp_internals_part646.h"
	"il2cpp_internals/headers/il2cpp_internals_part647.h"
	"il2cpp_internals/headers/il2cpp_internals_part648.h"
	"il2cpp_internals/headers/il2cpp_internals_part649.h"
	"il2cpp_internals/headers/il2cpp_internals_part650.h"
	"il2cpp_internals/headers/il2cpp_internals_part651.h"
	"il2cpp_internals/headers/il2cpp_internals_part652.h"
	"il2cpp_internals/headers/il2cpp_internals_part653.h"
	"il2cpp_internals/headers/il2cpp_internals_part654.h"
	"il2cpp_internals/headers/il2cpp_internals_part655.h"
	"il2cpp_internals/headers/il2cpp_internals_part656.h"
	"il2cpp_internals/headers/il2cpp_internals_part657.h"
	"il2cpp_internals/headers/il2cpp_internals_part658.h"
	"il2cpp_internals/headers/il2cpp_internals_part659.h"
	"il2cpp_internals/headers/il2cpp_internals_part660.h"
	"il2cpp_internals/headers/il2cpp_internals_part661.h"
	"il2cpp_internals/headers/il2cpp_internals_part662.h"
	"il2cpp_internals/headers/il2cpp_internals_part663.h"
	"il2cpp_internals/headers/il2cpp_internals_part664.h"
	"il2cpp_internals/headers/il2cpp_internals_part665.h"
	"il2cpp_internals/headers/il2cpp_internals_part666.h"
	"il2cpp_internals/headers/il2cpp_internals_part667.h"
	"il2cpp_internals/headers/il2cpp_internals_part668.h"
	"il2cpp_internals/headers/il2cpp_internals_part669.h"
	"il2cpp_internals/headers/il2cpp_internals_part670.h"
	"il2cpp_internals/headers/il2cpp_internals_part671.h"
	"il2cpp_internals/headers/il2cpp_internals_part672.h"
	"il2cpp_internals/headers/il2cpp_internals_part673.h"
	"il2cpp_internals/headers/il2cpp_internals_part674.h"
	"il2cpp_internals/headers/il2cpp_internals_part675.h"
	"il2cpp_internals/headers/il2cpp_internals_part676.h"
	"il2cpp_internals/headers/il2cpp_internals_part677.h"
	"il2cpp_internals/headers/il2cpp_internals_part678.h"
	"il2cpp_internals/headers/il2cpp_internals_part679.h"
	"il2cpp_internals/headers/il2cpp_internals_part680.h"
	"il2cpp_internals/headers/il2cpp_internals_part681.h"
	"il2cpp_internals/headers/il2cpp_internals_part682.h"
	"il2cpp_internals/headers/il2cpp_internals_part683.h"
	"il2cpp_internals/headers/il2cpp_internals_part684.h"
	"il2cpp_internals/headers/il2cpp_internals_part685.h"
	"il2cpp_internals/headers/il2cpp_internals_part686.h"
	"il2cpp_internals/headers/il2cpp_internals_part687.h"
	"il2cpp_internals/headers/il2cpp_internals_part688.h"
	"il2cpp_internals/headers/il2cpp_internals_part689.h"
	"il2cpp_internals/headers/il2cpp_internals_part690.h"
	"il2cpp_internals/headers/il2cpp_internals_part691.h"
	"il2cpp_internals/headers/il2cpp_internals_part692.h"
	"il2cpp_internals/headers/il2cpp_internals_part693.h"
	"il2cpp_internals/headers/il2cpp_internals_part694.h"
	"il2cpp_internals/headers/il2cpp_internals_part695.h"
	"il2cpp_internals/headers/il2cpp_internals_part696.h"
	"il2cpp_internals/headers/il2cpp_internals_part697.h"
	"il2cpp_internals/headers/il2cpp_internals_part698.h"
	"il2cpp_internals/headers/il2cpp_internals_part699.h"
	"il2cpp_internals/headers/il2cpp_internals_part700.h"
	"il2cpp_internals/headers/il2cpp_internals_part701.h"
	"il2cpp_internals/headers/il2cpp_internals_part702.h"
	"il2cpp_internals/headers/il2cpp_internals_part703.h"
	"il2cpp_internals/headers/il2cpp_internals_part704.h"
	"il2cpp_internals/headers/il2cpp_internals_part705.h"
	"il2cpp_internals/headers/il2cpp_internals_part706.h"
	"il2cpp_internals/headers/il2cpp_internals_part707.h"
	"il2cpp_internals/headers/il2cpp_internals_part708.h"
	"il2cpp_internals/headers/il2cpp_internals_part709.h"
	"il2cpp_internals/headers/il2cpp_internals_part710.h"
	"il2cpp_internals/headers/il2cpp_internals_part711.h"
	"il2cpp_internals/headers/il2cpp_internals_part712.h"
	"il2cpp_internals/headers/il2cpp_internals_part713.h"
	"il2cpp_internals/headers/il2cpp_internals_part714.h"
	"il2cpp_internals/headers/il2cpp_internals_part715.h"
	"il2cpp_internals/headers/il2cpp_internals_part716.h"
	"il2cpp_internals/headers/il2cpp_internals_part717.h"
	"il2cpp_internals/headers/il2cpp_internals_part718.h"
	"il2cpp_internals/headers/il2cpp_internals_part719.h"
	"il2cpp_internals/headers/il2cpp_internals_part720.h"
	"il2cpp_internals/headers/il2cpp_internals_part721.h"
	"il2cpp_internals/headers/il2cpp_internals_part722.h"
	"il2cpp_internals/headers/il2cpp_internals_part723.h"
	"il2cpp_internals/headers/il2cpp_internals_part724.h"
	"il2cpp_internals/headers/il2cpp_internals_part725.h"
	"il2cpp_internals/headers/il2cpp_internals_part726.h"
	"il2cpp_internals/headers/il2cpp_internals_part727.h"
	"il2cpp_internals/headers/il2cpp_internals_part728.h"
	"il2cpp_internals/headers/il2cpp_internals_part729.h"
	"il2cpp_internals/headers/il2cpp_internals_part730.h"
	"il2cpp_internals/headers/il2cpp_internals_part731.h"
	"il2cpp_internals/headers/il2cpp_internals_part732.h"
	"il2cpp_internals/headers/il2cpp_internals_part733.h"
	"il2cpp_internals/headers/il2cpp_internals_part734.h"
	"il2cpp_internals/headers/il2cpp_internals_part735.h"
	"il2cpp_internals/headers/il2cpp_internals_part736.h"
	"il2cpp_internals/headers/il2cpp_internals_part737.h"
	"il2cpp_internals/headers/il2cpp_internals_part738.h"
	"il2cpp_internals/headers/il2cpp_internals_part739.h"
	"il2cpp_internals/headers/il2cpp_internals_part740.h"
	"il2cpp_internals/headers/il2cpp_internals_part741.h"
	"il2cpp_internals/headers/il2cpp_internals_part742.h"
	"il2cpp_internals/headers/il2cpp_internals_part743.h"
	"il2cpp_internals/headers/il2cpp_internals_part744.h"
	"il2cpp_internals/headers/il2cpp_internals_part745.h"
	"il2cpp_internals/headers/il2cpp_internals_part746.h"
	"il2cpp_internals/headers/il2cpp_internals_part747.h"
	"il2cpp_internals/headers/il2cpp_internals_part748.h"
	"il2cpp_internals/headers/il2cpp_internals_part749.h"
	"il2cpp_internals/headers/il2cpp_internals_part750.h"
	"il2cpp_internals/headers/il2cpp_internals_part751.h"
	"il2cpp_internals/headers/il2cpp_internals_part752.h"
	"il2cpp_internals/headers/il2cpp_internals_part753.h"
	"il2cpp_internals/headers/il2cpp_internals_part754.h"
	"il2cpp_internals/headers/il2cpp_internals_part755.h"
	"il2cpp_internals/headers/il2cpp_internals_part756.h"
	"il2cpp_internals/headers/il2cpp_internals_part757.h"
	"il2cpp_internals/headers/il2cpp_internals_part758.h"
	"il2cpp_internals/headers/il2cpp_internals_part759.h"
	"il2cpp_internals/headers/il2cpp_internals_part760.h"
	"il2cpp_internals/headers/il2cpp_internals_part761.h"
	"il2cpp_internals/headers/il2cpp_internals_part762.h"
	"il2cpp_internals/headers/il2cpp_internals_part763.h"
	"il2cpp_internals/headers/il2cpp_internals_part764.h"
	"il2cpp_internals/headers/il2cpp_internals_part765.h"
	"il2cpp_internals/headers/il2cpp_internals_part766.h"
	"il2cpp_internals/headers/il2cpp_internals_part767.h"
	"il2cpp_internals/headers/il2cpp_internals_part768.h"
	"il2cpp_internals/headers/il2cpp_internals_part769.h"
	"il2cpp_internals/headers/il2cpp_internals_part770.h"
	"il2cpp_internals/headers/il2cpp_internals_part771.h"
	"il2cpp_internals/headers/il2cpp_internals_part772.h"
	"il2cpp_internals/headers/il2cpp_internals_part773.h"
	"il2cpp_internals/headers/il2cpp_internals_part774.h"
	"il2cpp_internals/headers/il2cpp_internals_part775.h"
	"il2cpp_internals/headers/il2cpp_internals_part776.h"
	"il2cpp_internals/headers/il2cpp_internals_part777.h"
	"il2cpp_internals/headers/il2cpp_internals_part778.h"
	"il2cpp_internals/headers/il2cpp_internals_part779.h"
	"il2cpp_internals/headers/il2cpp_internals_part780.h"
	"il2cpp_internals/headers/il2cpp_internals_part781.h"
	"il2cpp_internals/headers/il2cpp_internals_part782.h"
	"il2cpp_internals/headers/il2cpp_internals_part783.h"
	"il2cpp_internals/headers/il2cpp_internals_part784.h"
	"il2cpp_internals/headers/il2cpp_internals_part785.h"
	"il2cpp_internals/headers/il2cpp_internals_part786.h"
	"il2cpp_internals/headers/il2cpp_internals_part787.h"
	"il2cpp_internals/headers/il2cpp_internals_part788.h"
	"il2cpp_internals/headers/il2cpp_internals_part789.h"
	"il2cpp_internals/headers/il2cpp_internals_part790.h"
	"il2cpp_internals/headers/il2cpp_internals_part791.h"
	"il2cpp_internals/headers/il2cpp_internals_part792.h"
	"il2cpp_internals/headers/il2cpp_internals_part793.h"
	"il2cpp_internals/headers/il2cpp_internals_part794.h"
	"il2cpp_internals/headers/il2cpp_internals_part795.h"
	"il2cpp_internals/headers/il2cpp_internals_part796.h"
	"il2cpp_internals/headers/il2cpp_internals_part797.h"
	"il2cpp_internals/headers/il2cpp_internals_part798.h"
	"il2cpp_internals/headers/il2cpp_internals_part799.h"
	"il2cpp_internals/headers/il2cpp_internals_part800.h"
	"il2cpp_internals/headers/il2cpp_internals_part801.h"
	"il2cpp_internals/headers/il2cpp_internals_part802.h"
	"il2cpp_internals/headers/il2cpp_internals_part803.h"
	"il2cpp_internals/headers/il2cpp_internals_part804.h"
	"il2cpp_internals/headers/il2cpp_internals_part805.h"
	"il2cpp_internals/headers/il2cpp_internals_part806.h"
	"il2cpp_internals/headers/il2cpp_internals_part807.h"
	"il2cpp_internals/headers/il2cpp_internals_part808.h"
	"il2cpp_internals/headers/il2cpp_internals_part809.h"
	"il2cpp_internals/headers/il2cpp_internals_part810.h"
	"il2cpp_internals/headers/il2cpp_internals_part811.h"
	"il2cpp_internals/headers/il2cpp_internals_part812.h"
	"il2cpp_internals/headers/il2cpp_internals_part813.h"
	"il2cpp_internals/headers/il2cpp_internals_part814.h"
	"il2cpp_internals/headers/il2cpp_internals_part815.h"
	"il2cpp_internals/headers/il2cpp_internals_part816.h"
	"il2cpp_internals/headers/il2cpp_internals_part817.h"
	"il2cpp_internals/headers/il2cpp_internals_part818.h"
	"il2cpp_internals/headers/il2cpp_internals_part819.h"
	"il2cpp_internals/headers/il2cpp_internals_part820.h"
	"il2cpp_internals/headers/il2cpp_internals_part821.h"
	"il2cpp_internals/headers/il2cpp_internals_part822.h"
	"il2cpp_internals/headers/il2cpp_internals_part823.h"
	"il2cpp_internals/headers/il2cpp_internals_part824.h"
	"il2cpp_internals/headers/il2cpp_internals_part825.h"
	"il2cpp_internals/headers/il2cpp_internals_part826.h"
	"il2cpp_internals/headers/il2cpp_internals_part827.h"
	"il2cpp_internals/headers/il2cpp_internals_part828.h"
	"il2cpp_internals/headers/il2cpp_internals_part829.h"
	"il2cpp_internals/headers/il2cpp_internals_part830.h"
	"il2cpp_internals/headers/il2cpp_internals_part831.h"
	"il2cpp_internals/headers/il2cpp_internals_part832.h"
	"il2cpp_internals/headers/il2cpp_internals_part833.h"
	"il2cpp_internals/headers/il2cpp_internals_part834.h"
	"il2cpp_internals/headers/il2cpp_internals_part835.h"
	"il2cpp_internals/headers/il2cpp_internals_part836.h"
	"il2cpp_internals/headers/il2cpp_internals_part837.h"
	"il2cpp_internals/headers/il2cpp_internals_part838.h"
	"il2cpp_internals/headers/il2cpp_internals_part839.h"
	"il2cpp_internals/headers/il2cpp_internals_part840.h"
	"il2cpp_internals/headers/il2cpp_internals_part841.h"
	"il2cpp_internals/headers/il2cpp_internals_part842.h"
	"il2cpp_internals/headers/il2cpp_internals_part843.h"
	"il2cpp_internals/headers/il2cpp_internals_part844.h"
	"il2cpp_internals/headers/il2cpp_internals_part845.h"
	"il2cpp_internals/headers/il2cpp_internals_part846.h"
	"il2cpp_internals/headers/il2cpp_internals_part847.h"
	"il2cpp_internals/headers/il2cpp_internals_part848.h"
	"il2cpp_internals/headers/il2cpp_internals_part849.h"
	"il2cpp_internals/headers/il2cpp_internals_part850.h"
	"il2cpp_internals/headers/il2cpp_internals_part851.h"
	"il2cpp_internals/headers/il2cpp_internals_part852.h"
	"il2cpp_internals/headers/il2cpp_internals_part853.h"
	"il2cpp_internals/headers/il2cpp_internals_part854.h"
	"il2cpp_internals/headers/il2cpp_internals_part855.h"
	"il2cpp_internals/headers/il2cpp_internals_part856.h"
	"il2cpp_internals/headers/il2cpp_internals_part857.h"
	"il2cpp_internals/headers/il2cpp_internals_part858.h"
	"il2cpp_internals/headers/il2cpp_internals_part859.h"
	"il2cpp_internals/headers/il2cpp_internals_part860.h"
	"il2cpp_internals/headers/il2cpp_internals_part861.h"
	"il2cpp_internals/headers/il2cpp_internals_part862.h"
	"il2cpp_internals/headers/il2cpp_internals_part863.h"
	"il2cpp_internals/headers/il2cpp_internals_part864.h"
	"il2cpp_internals/headers/il2cpp_internals_part865.h"
	"il2cpp_internals/headers/il2cpp_internals_part866.h"
	"il2cpp_internals/headers/il2cpp_internals_part867.h"
	"il2cpp_internals/headers/il2cpp_internals_part868.h"
	"il2cpp_internals/headers/il2cpp_internals_part869.h"
	"il2cpp_internals/headers/il2cpp_internals_part870.h"
	"il2cpp_internals/headers/il2cpp_internals_part871.h"
	"il2cpp_internals/headers/il2cpp_internals_part872.h"
	"il2cpp_internals/headers/il2cpp_internals_part873.h"
	"il2cpp_internals/headers/il2cpp_internals_part874.h"
	"il2cpp_internals/headers/il2cpp_internals_part875.h"
	"il2cpp_internals/headers/il2cpp_internals_part876.h"
	"il2cpp_internals/headers/il2cpp_internals_part877.h"
	"il2cpp_internals/headers/il2cpp_internals_part878.h"
	"il2cpp_internals/headers/il2cpp_internals_part879.h"
	"il2cpp_internals/headers/il2cpp_internals_part880.h"
	"il2cpp_internals/headers/il2cpp_internals_part881.h"
	"il2cpp_internals/headers/il2cpp_internals_part882.h"
	"il2cpp_internals/headers/il2cpp_internals_part883.h"
	"il2cpp_internals/headers/il2cpp_internals_part884.h"
	"il2cpp_internals/headers/il2cpp_internals_part885.h"
	"il2cpp_internals/headers/il2cpp_internals_part886.h"
	"il2cpp_internals/headers/il2cpp_internals_part887.h"
	"il2cpp_internals/headers/il2cpp_internals_part888.h"
	"il2cpp_internals/headers/il2cpp_internals_part889.h"
	"il2cpp_internals/headers/il2cpp_internals_part890.h"
	"il2cpp_internals/headers/il2cpp_internals_part891.h"
	"il2cpp_internals/headers/il2cpp_internals_part892.h"
	"il2cpp_internals/headers/il2cpp_internals_part893.h"
	"il2cpp_internals/headers/il2cpp_internals_part894.h"
	"il2cpp_internals/headers/il2cpp_internals_part895.h"
	"il2cpp_internals/headers/il2cpp_internals_part896.h"
	"il2cpp_internals/headers/il2cpp_internals_part897.h"
	"il2cpp_internals/headers/il2cpp_internals_part898.h"
	"il2cpp_internals/headers/il2cpp_internals_part899.h"
	"il2cpp_internals/headers/il2cpp_internals_part900.h"
	"il2cpp_internals/headers/il2cpp_internals_part901.h"
	"il2cpp_internals/headers/il2cpp_internals_part902.h"
	"il2cpp_internals/headers/il2cpp_internals_part903.h"
	"il2cpp_internals/headers/il2cpp_internals_part904.h"
	"il2cpp_internals/headers/il2cpp_internals_part905.h"
	"il2cpp_internals/headers/il2cpp_internals_part906.h"
	"il2cpp_internals/headers/il2cpp_internals_part907.h"
	"il2cpp_internals/headers/il2cpp_internals_part908.h"
	"il2cpp_internals/headers/il2cpp_internals_part909.h"
	"il2cpp_internals/headers/il2cpp_internals_part910.h"
	"il2cpp_internals/headers/il2cpp_internals_part911.h"
	"il2cpp_internals/headers/il2cpp_internals_part912.h"
	"il2cpp_internals/headers/il2cpp_internals_part913.h"
	"il2cpp_internals/headers/il2cpp_internals_part914.h"
	"il2cpp_internals/headers/il2cpp_internals_part915.h"
	"il2cpp_internals/headers/il2cpp_internals_part916.h"
	"il2cpp_internals/headers/il2cpp_internals_part917.h"
	"il2cpp_internals/headers/il2cpp_internals_part918.h"
	"il2cpp_internals/headers/il2cpp_internals_part919.h"
	"il2cpp_internals/headers/il2cpp_internals_part920.h"
	"il2cpp_internals/headers/il2cpp_internals_part921.h"
	"il2cpp_internals/headers/il2cpp_internals_part922.h"
	"il2cpp_internals/headers/il2cpp_internals_part923.h"
	"il2cpp_internals/headers/il2cpp_internals_part924.h"
	"il2cpp_internals/headers/il2cpp_internals_part925.h"
	"il2cpp_internals/headers/il2cpp_internals_part926.h"
	"il2cpp_internals/headers/il2cpp_internals_part927.h"
	"il2cpp_internals/headers/il2cpp_internals_part928.h"
	"il2cpp_internals/headers/il2cpp_internals_part929.h"
	"il2cpp_internals/headers/il2cpp_internals_part930.h"
	"il2cpp_internals/headers/il2cpp_internals_part931.h"
	"il2cpp_internals/headers/il2cpp_internals_part932.h"
	"il2cpp_internals/headers/il2cpp_internals_part933.h"
	"il2cpp_internals/headers/il2cpp_internals_part934.h"
	"il2cpp_internals/headers/il2cpp_internals_part935.h"
	"il2cpp_internals/headers/il2cpp_internals_part936.h"
	"il2cpp_internals/headers/il2cpp_internals_part937.h"
	"il2cpp_internals/headers/il2cpp_internals_part938.h"
	"il2cpp_internals/headers/il2cpp_internals_part939.h"
	"il2cpp_internals/headers/il2cpp_internals_part940.h"
	"il2cpp_internals/headers/il2cpp_internals_part941.h"
	"il2cpp_internals/headers/il2cpp_internals_part942.h"
	"il2cpp_internals/headers/il2cpp_internals_part943.h"
	"il2cpp_internals/headers/il2cpp_internals_part944.h"
	"il2cpp_internals/headers/il2cpp_internals_part945.h"
	"il2cpp_internals/headers/il2cpp_internals_part946.h"
	"il2cpp_internals/headers/il2cpp_internals_part947.h"
	"il2cpp_internals/headers/il2cpp_internals_part948.h"
	"il2cpp_internals/headers/il2cpp_internals_part949.h"
	"il2cpp_internals/headers/il2cpp_internals_part950.h"
	"il2cpp_internals/headers/il2cpp_internals_part951.h"
	"il2cpp_internals/headers/il2cpp_internals_part952.h"
	"il2cpp_internals/headers/il2cpp_internals_part953.h"
	"il2cpp_internals/headers/il2cpp_internals_part954.h"
	"il2cpp_internals/headers/il2cpp_internals_part955.h"
	"il2cpp_internals/headers/il2cpp_internals_part956.h"
	"il2cpp_internals/headers/il2cpp_internals_part957.h"
	"il2cpp_internals/headers/il2cpp_internals_part958.h"
	"il2cpp_internals/headers/il2cpp_internals_part959.h"
	"il2cpp_internals/headers/il2cpp_internals_part960.h"
	"il2cpp_internals/headers/il2cpp_internals_part961.h"
	"il2cpp_internals/headers/il2cpp_internals_part962.h"
	"il2cpp_internals/headers/il2cpp_internals_part963.h"
	"il2cpp_internals/headers/il2cpp_internals_part964.h"
	"il2cpp_internals/headers/il2cpp_internals_part965.h"
	"il2cpp_internals/headers/il2cpp_internals_part966.h"
	"il2cpp_internals/headers/il2cpp_internals_part967.h"
	"il2cpp_internals/headers/il2cpp_internals_part968.h"
	"il2cpp_internals/headers/il2cpp_internals_part969.h"
	"il2cpp_internals/headers/il2cpp_internals_part970.h"
	"il2cpp_internals/headers/il2cpp_internals_part971.h"
	"il2cpp_internals/headers/il2cpp_internals_part972.h"
	"il2cpp_internals/headers/il2cpp_internals_part973.h"
	"il2cpp_internals/headers/il2cpp_internals_part974.h"
	"il2cpp_internals/headers/il2cpp_internals_part975.h"
	"il2cpp_internals/headers/il2cpp_internals_part976.h"
	"il2cpp_internals/headers/il2cpp_internals_part977.h"
	"il2cpp_internals/headers/il2cpp_internals_part978.h"
	"il2cpp_internals/headers/il2cpp_internals_part979.h"
	"il2cpp_internals/headers/il2cpp_internals_part980.h"
	"il2cpp_internals/headers/il2cpp_internals_part981.h"
	"il2cpp_internals/headers/il2cpp_internals_part982.h"
	"il2cpp_internals/headers/il2cpp_internals_part983.h"
	"il2cpp_internals/headers/il2cpp_internals_part984.h"
	"il2cpp_internals/headers/il2cpp_internals_part985.h"
	"il2cpp_internals/headers/il2cpp_internals_part986.h"
	"il2cpp_internals/headers/il2cpp_internals_part987.h"
	"il2cpp_internals/headers/il2cpp_internals_part988.h"
	"il2cpp_internals/headers/il2cpp_internals_part989.h"
	"il2cpp_internals/headers/il2cpp_internals_part990.h"
	"il2cpp_internals/headers/il2cpp_internals_part991.h"
	"il2cpp_internals/headers/il2cpp_internals_part992.h"
	"il2cpp_internals/headers/il2cpp_internals_part993.h"
	"il2cpp_internals/headers/il2cpp_internals_part994.h"
	"il2cpp_internals/headers/il2cpp_internals_part995.h"
	"il2cpp_internals/headers/il2cpp_internals_part996.h"
	"il2cpp_internals/headers/il2cpp_internals_part997.h"
	"il2cpp_internals/headers/il2cpp_internals_part998.h"
	"il2cpp_internals/headers/il2cpp_internals_part999.h"
	"il2cpp_internals/headers/il2cpp_internals_part1000.h"
	"il2cpp_internals/headers/il2cpp_internals_part1001.h"
	"il2cpp_internals/headers/il2cpp_internals_part1002.h"
	"il2cpp_internals/headers/il2cpp_internals_part1003.h"
	"il2cpp_internals/headers/il2cpp_internals_part1004.h"
	"il2cpp_internals/headers/il2cpp_internals_part1005.h"
	"il2cpp_internals/headers/il2cpp_internals_part1006.h"
	"il2cpp_internals/headers/il2cpp_internals_part1007.h"
	"il2cpp_internals/headers/il2cpp_internals_part1008.h"
	"il2cpp_internals/headers/il2cpp_internals_part1009.h"
	"il2cpp_internals/headers/il2cpp_internals_part1010.h"
	"il2cpp_internals/headers/il2cpp_internals_part1011.h"
	"il2cpp_internals/headers/il2cpp_internals_part1012.h"
	"il2cpp_internals/headers/il2cpp_internals_part1013.h"
	"il2cpp_internals/headers/il2cpp_internals_part1014.h"
	"il2cpp_internals/headers/il2cpp_internals_part1015.h"
	"il2cpp_internals/headers/il2cpp_internals_part1016.h"
	"il2cpp_internals/headers/il2cpp_internals_part1017.h"
	"il2cpp_internals/headers/il2cpp_internals_part1018.h"
	"il2cpp_internals/headers/il2cpp_internals_part1019.h"
	"il2cpp_internals/headers/il2cpp_internals_part1020.h"
	"il2cpp_internals/headers/il2cpp_internals_part1021.h"
	"il2cpp_internals/headers/il2cpp_internals_part1022.h"
	"il2cpp_internals/headers/il2cpp_internals_part1023.h"
	"il2cpp_internals/headers/il2cpp_internals_part1024.h"
	"il2cpp_internals/headers/il2cpp_internals_part1025.h"
	"il2cpp_internals/headers/il2cpp_internals_part1026.h"
	"il2cpp_internals/headers/il2cpp_internals_part1027.h"
	"il2cpp_internals/headers/il2cpp_internals_part1028.h"
	"il2cpp_internals/headers/il2cpp_internals_part1029.h"
	"il2cpp_internals/headers/il2cpp_internals_part1030.h"
	"il2cpp_internals/headers/il2cpp_internals_part1031.h"
	"il2cpp_internals/headers/il2cpp_internals_part1032.h"
	"il2cpp_internals/headers/il2cpp_internals_part1033.h"
	"il2cpp_internals/headers/il2cpp_internals_part1034.h"
	"il2cpp_internals/headers/il2cpp_internals_part1035.h"
	"il2cpp_internals/headers/il2cpp_internals_part1036.h"
	"il2cpp_internals/headers/il2cpp_internals_part1037.h"
	"il2cpp_internals/headers/il2cpp_internals_part1038.h"
	"il2cpp_internals/headers/il2cpp_internals_part1039.h"
	"il2cpp_internals/headers/il2cpp_internals_part1040.h"
	"il2cpp_internals/headers/il2cpp_internals_part1041.h"
	"il2cpp_internals/headers/il2cpp_internals_part1042.h"
	"il2cpp_internals/headers/il2cpp_internals_part1043.h"
	"il2cpp_internals/headers/il2cpp_internals_part1044.h"
	"il2cpp_internals/headers/il2cpp_internals_part1045.h"
	"il2cpp_internals/headers/il2cpp_internals_part1046.h"
	"il2cpp_internals/headers/il2cpp_internals_part1047.h"
	"il2cpp_internals/headers/il2cpp_internals_part1048.h"
	"il2cpp_internals/headers/il2cpp_internals_part1049.h"
	"il2cpp_internals/headers/il2cpp_internals_part1050.h"
	"il2cpp_internals/headers/il2cpp_internals_part1051.h"
	"il2cpp_internals/headers/il2cpp_internals_part1052.h"
	"il2cpp_internals/headers/il2cpp_internals_part1053.h"
	"il2cpp_internals/headers/il2cpp_internals_part1054.h"
	"il2cpp_internals/headers/il2cpp_internals_part1055.h"
	"il2cpp_internals/headers/il2cpp_internals_part1056.h"
	"il2cpp_internals/headers/il2cpp_internals_part1057.h"
	"il2cpp_internals/headers/il2cpp_internals_part1058.h"
	"il2cpp_internals/headers/il2cpp_internals_part1059.h"
	"il2cpp_internals/headers/il2cpp_internals_part1060.h"
	"il2cpp_internals/headers/il2cpp_internals_part1061.h"
	"il2cpp_internals/headers/il2cpp_internals_part1062.h"
	"il2cpp_internals/headers/il2cpp_internals_part1063.h"
	"il2cpp_internals/headers/il2cpp_internals_part1064.h"
	"il2cpp_internals/headers/il2cpp_internals_part1065.h"
	"il2cpp_internals/headers/il2cpp_internals_part1066.h"
	"il2cpp_internals/headers/il2cpp_internals_part1067.h"
	"il2cpp_internals/headers/il2cpp_internals_part1068.h"
	"il2cpp_internals/headers/il2cpp_internals_part1069.h"
	"il2cpp_internals/headers/il2cpp_internals_part1070.h"
	"il2cpp_internals/headers/il2cpp_internals_part1071.h"
	"il2cpp_internals/headers/il2cpp_internals_part1072.h"
	"il2cpp_internals/headers/il2cpp_internals_part1073.h"
	"il2cpp_internals/headers/il2cpp_internals_part1074.h"
	"il2cpp_internals/headers/il2cpp_internals_part1075.h"
	"il2cpp_internals/headers/il2cpp_internals_part1076.h"
	"il2cpp_internals/headers/il2cpp_internals_part1077.h"
	"il2cpp_internals/headers/il2cpp_internals_part1078.h"
	"il2cpp_internals/headers/il2cpp_internals_part1079.h"
	"il2cpp_internals/headers/il2cpp_internals_part1080.h"
	"il2cpp_internals/headers/il2cpp_internals_part1081.h"
	"il2cpp_internals/headers/il2cpp_internals_part1082.h"
	"il2cpp_internals/headers/il2cpp_internals_part1083.h"
	"il2cpp_internals/headers/il2cpp_internals_part1084.h"
	"il2cpp_internals/headers/il2cpp_internals_part1085.h"
	"il2cpp_internals/headers/il2cpp_internals_part1086.h"
	"il2cpp_internals/headers/il2cpp_internals_part1087.h"
	"il2cpp_internals/headers/il2cpp_internals_part1088.h"
	"il2cpp_internals/headers/il2cpp_internals_part1089.h"
	"il2cpp_internals/headers/il2cpp_internals_part1090.h"
	"il2cpp_internals/headers/il2cpp_internals_part1091.h"
	"il2cpp_internals/headers/il2cpp_internals_part1092.h"
	"il2cpp_internals/headers/il2cpp_internals_part1093.h"
	"il2cpp_internals/headers/il2cpp_internals_part1094.h"
	"il2cpp_internals/headers/il2cpp_internals_part1095.h"
	"il2cpp_internals/headers/il2cpp_internals_part1096.h"
	"il2cpp_internals/headers/il2cpp_internals_part1097.h"
	"il2cpp_internals/headers/il2cpp_internals_part1098.h"
	"il2cpp_internals/headers/il2cpp_internals_part1099.h"
	"il2cpp_internals/headers/il2cpp_internals_part1100.h"
	"il2cpp_internals/headers/il2cpp_internals_part1101.h"
	"il2cpp_internals/headers/il2cpp_internals_part1102.h"
	"il2cpp_internals/headers/il2cpp_internals_part1103.h"
	"il2cpp_internals/headers/il2cpp_internals_part1104.h"
	"il2cpp_internals/headers/il2cpp_internals_part1105.h"
	"il2cpp_internals/headers/il2cpp_internals_part1106.h"
	"il2cpp_internals/headers/il2cpp_internals_part1107.h"
	"il2cpp_internals/headers/il2cpp_internals_part1108.h"
	"il2cpp_internals/headers/il2cpp_internals_part1109.h"
	"il2cpp_internals/headers/il2cpp_internals_part1110.h"
	"il2cpp_internals/headers/il2cpp_internals_part1111.h"
	"il2cpp_internals/headers/il2cpp_internals_part1112.h"
	"il2cpp_internals/headers/il2cpp_internals_part1113.h"
	"il2cpp_internals/headers/il2cpp_internals_part1114.h"
	"il2cpp_internals/headers/il2cpp_internals_part1115.h"
	"il2cpp_internals/headers/il2cpp_internals_part1116.h"
	"il2cpp_internals/headers/il2cpp_internals_part1117.h"
	"il2cpp_internals/headers/il2cpp_internals_part1118.h"
	"il2cpp_internals/headers/il2cpp_internals_part1119.h"
	"il2cpp_internals/headers/il2cpp_internals_part1120.h"
	"il2cpp_internals/headers/il2cpp_internals_part1121.h"
	"il2cpp_internals/headers/il2cpp_internals_part1122.h"
	"il2cpp_internals/headers/il2cpp_internals_part1123.h"
	"il2cpp_internals/headers/il2cpp_internals_part1124.h"
	"il2cpp_internals/headers/il2cpp_internals_part1125.h"
	"il2cpp_internals/headers/il2cpp_internals_part1126.h"
	"il2cpp_internals/headers/il2cpp_internals_part1127.h"
	"il2cpp_internals/headers/il2cpp_internals_part1128.h"
	"il2cpp_internals/headers/il2cpp_internals_part1129.h"
	"il2cpp_internals/headers/il2cpp_internals_part1130.h"
	"il2cpp_internals/headers/il2cpp_internals_part1131.h"
	"il2cpp_internals/headers/il2cpp_internals_part1132.h"
	"il2cpp_internals/headers/il2cpp_internals_part1133.h"
	"il2cpp_internals/headers/il2cpp_internals_part1134.h"
	"il2cpp_internals/headers/il2cpp_internals_part1135.h"
	"il2cpp_internals/headers/il2cpp_internals_part1136.h"
	"il2cpp_internals/headers/il2cpp_internals_part1137.h"
	"il2cpp_internals/headers/il2cpp_internals_part1138.h"
	"il2cpp_internals/headers/il2cpp_internals_part1139.h"
	"il2cpp_internals/headers/il2cpp_internals_part1140.h"
	"il2cpp_internals/headers/il2cpp_internals_part1141.h"
	"il2cpp_internals/headers/il2cpp_internals_part1142.h"
	"il2cpp_internals/headers/il2cpp_internals_part1143.h"
	"il2cpp_internals/headers/il2cpp_internals_part1144.h"
	"il2cpp_internals/headers/il2cpp_internals_part1145.h"
	"il2cpp_internals/headers/il2cpp_internals_part1146.h"
	"il2cpp_internals/headers/il2cpp_internals_part1147.h"
	"il2cpp_internals/headers/il2cpp_internals_part1148.h"
	"il2cpp_internals/headers/il2cpp_internals_part1149.h"
	"il2cpp_internals/headers/il2cpp_internals_part1150.h"
	"il2cpp_internals/headers/il2cpp_internals_part1151.h"
	"il2cpp_internals/headers/il2cpp_internals_part1152.h"
	"il2cpp_internals/headers/il2cpp_internals_part1153.h"
	"il2cpp_internals/headers/il2cpp_internals_part1154.h"
	"il2cpp_internals/headers/il2cpp_internals_part1155.h"
	"il2cpp_internals/headers/il2cpp_internals_part1156.h"
	"il2cpp_internals/headers/il2cpp_internals_part1157.h"
	"il2cpp_internals/headers/il2cpp_internals_part1158.h"
	"il2cpp_internals/headers/il2cpp_internals_part1159.h"
	"il2cpp_internals/headers/il2cpp_internals_part1160.h"
	"il2cpp_internals/headers/il2cpp_internals_part1161.h"
	"il2cpp_internals/headers/il2cpp_internals_part1162.h"
	"il2cpp_internals/headers/il2cpp_internals_part1163.h"
	"il2cpp_internals/headers/il2cpp_internals_part1164.h"
	"il2cpp_internals/headers/il2cpp_internals_part1165.h"
	"il2cpp_internals/headers/il2cpp_internals_part1166.h"
	"il2cpp_internals/headers/il2cpp_internals_part1167.h"
	"il2cpp_internals/headers/il2cpp_internals_part1168.h"
	"il2cpp_internals/headers/il2cpp_internals_part1169.h"
	"il2cpp_internals/headers/il2cpp_internals_part1170.h"
	"il2cpp_internals/headers/il2cpp_internals_part1171.h"
	"il2cpp_internals/headers/il2cpp_internals_part1172.h"
	"il2cpp_internals/headers/il2cpp_internals_part1173.h"
	"il2cpp_internals/headers/il2cpp_internals_part1174.h"
	"il2cpp_internals/headers/il2cpp_internals_part1175.h"
	"il2cpp_internals/headers/il2cpp_internals_part1176.h"
	"il2cpp_internals/headers/il2cpp_internals_part1177.h"
	"il2cpp_internals/headers/il2cpp_internals_part1178.h"
	"il2cpp_internals/headers/il2cpp_internals_part1179.h"
	"il2cpp_internals/headers/il2cpp_internals_part1180.h"
	"interception.h"
	"interception_macros.h"
	"macros.h"
	"il2cpp_math.h"
)

if(${DEFINE_INTERNALS})
    set(
        INTERNAL_IL2CPP_HEADERS
        "il2cpp_internals/il2cpp_internals_p1.h"
        "il2cpp_internals/il2cpp_internals_p2.h"
        "il2cpp_internals/il2cpp_internals_p3.h"
        "il2cpp_internals/il2cpp_internals_p4.h"
        "il2cpp_internals/il2cpp_internals_p5.h"
        "il2cpp_internals/il2cpp_internals_p6.h"
        "il2cpp_internals/il2cpp_internals_p7.h"
        "il2cpp_internals/il2cpp_internals_p8.h"
    )
endif()

set(
	MISC_FILES
	".editorconfig"
	"CMakeLists.txt"
	"cpp.hint"
)

add_library(${PROJECT_NAME} SHARED
	${SOURCE_FILES}
	${PUBLIC_HEADER_FILES}
	${INTERNAL_IL2CPP_HEADERS}
	${MISC_FILES}
)

target_compile_definitions(${PROJECT_NAME}
	PRIVATE COMPILING_IL2CPP_MODLOADER
)

set_target_properties(
	${PROJECT_NAME}
	PROPERTIES
		VERSION ${WORWR_VERSION}
		SOVERSION ${WORWR_MAJOR_VERSION}
		FOLDER cpp
)

target_include_directories(
	${PROJECT_NAME}
	PRIVATE
		.
		${CMAKE_CONFIG_DIRECTORY}
		${CONFIG_DIRECTORY}
		${CMAKE_ENGINE_DIRECTORY}
		${WOTWR_LIB_INCLUDE_DIR}
	SYSTEM
		${WOTWR_BASE_INCLUDES}
)

target_link_libraries(
	${PROJECT_NAME}
	"${WOTWR_LIB_DIR}/detours.lib"
	Common
	WinNetwork
)

target_precompile_headers(
	${PROJECT_NAME}
		PRIVATE <tchar.h>
		PRIVATE <framework.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/il2cpp_internals.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part0.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part2.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part3.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part4.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part5.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part6.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part7.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part8.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part9.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part10.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part11.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part12.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part13.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part14.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part15.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part16.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part17.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part18.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part19.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part20.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part21.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part22.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part23.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part24.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part25.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part26.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part27.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part28.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part29.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part30.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part31.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part32.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part33.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part34.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part35.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part36.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part37.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part38.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part39.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part40.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part41.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part42.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part43.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part44.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part45.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part46.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part47.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part48.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part49.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part50.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part51.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part52.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part53.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part54.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part55.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part56.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part57.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part58.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part59.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part60.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part61.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part62.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part63.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part64.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part65.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part66.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part67.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part68.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part69.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part70.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part71.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part72.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part73.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part74.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part75.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part76.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part77.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part78.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part79.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part80.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part81.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part82.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part83.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part84.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part85.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part86.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part87.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part88.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part89.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part90.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part91.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part92.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part93.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part94.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part95.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part96.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part97.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part98.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part99.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part100.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part101.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part102.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part103.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part104.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part105.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part106.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part107.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part108.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part109.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part110.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part111.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part112.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part113.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part114.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part115.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part116.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part117.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part118.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part119.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part120.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part121.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part122.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part123.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part124.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part125.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part126.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part127.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part128.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part129.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part130.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part131.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part132.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part133.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part134.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part135.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part136.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part137.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part138.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part139.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part140.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part141.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part142.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part143.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part144.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part145.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part146.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part147.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part148.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part149.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part150.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part151.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part152.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part153.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part154.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part155.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part156.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part157.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part158.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part159.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part160.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part161.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part162.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part163.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part164.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part165.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part166.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part167.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part168.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part169.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part170.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part171.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part172.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part173.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part174.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part175.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part176.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part177.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part178.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part179.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part180.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part181.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part182.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part183.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part184.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part185.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part186.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part187.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part188.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part189.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part190.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part191.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part192.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part193.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part194.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part195.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part196.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part197.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part198.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part199.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part200.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part201.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part202.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part203.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part204.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part205.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part206.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part207.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part208.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part209.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part210.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part211.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part212.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part213.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part214.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part215.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part216.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part217.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part218.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part219.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part220.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part221.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part222.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part223.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part224.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part225.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part226.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part227.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part228.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part229.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part230.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part231.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part232.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part233.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part234.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part235.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part236.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part237.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part238.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part239.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part240.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part241.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part242.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part243.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part244.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part245.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part246.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part247.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part248.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part249.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part250.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part251.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part252.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part253.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part254.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part255.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part256.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part257.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part258.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part259.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part260.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part261.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part262.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part263.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part264.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part265.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part266.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part267.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part268.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part269.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part270.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part271.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part272.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part273.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part274.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part275.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part276.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part277.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part278.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part279.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part280.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part281.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part282.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part283.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part284.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part285.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part286.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part287.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part288.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part289.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part290.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part291.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part292.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part293.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part294.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part295.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part296.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part297.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part298.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part299.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part300.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part301.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part302.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part303.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part304.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part305.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part306.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part307.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part308.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part309.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part310.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part311.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part312.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part313.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part314.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part315.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part316.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part317.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part318.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part319.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part320.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part321.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part322.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part323.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part324.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part325.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part326.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part327.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part328.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part329.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part330.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part331.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part332.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part333.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part334.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part335.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part336.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part337.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part338.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part339.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part340.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part341.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part342.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part343.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part344.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part345.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part346.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part347.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part348.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part349.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part350.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part351.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part352.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part353.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part354.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part355.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part356.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part357.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part358.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part359.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part360.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part361.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part362.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part363.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part364.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part365.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part366.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part367.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part368.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part369.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part370.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part371.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part372.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part373.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part374.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part375.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part376.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part377.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part378.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part379.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part380.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part381.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part382.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part383.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part384.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part385.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part386.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part387.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part388.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part389.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part390.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part391.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part392.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part393.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part394.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part395.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part396.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part397.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part398.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part399.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part400.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part401.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part402.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part403.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part404.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part405.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part406.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part407.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part408.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part409.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part410.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part411.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part412.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part413.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part414.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part415.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part416.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part417.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part418.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part419.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part420.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part421.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part422.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part423.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part424.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part425.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part426.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part427.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part428.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part429.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part430.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part431.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part432.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part433.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part434.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part435.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part436.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part437.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part438.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part439.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part440.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part441.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part442.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part443.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part444.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part445.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part446.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part447.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part448.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part449.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part450.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part451.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part452.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part453.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part454.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part455.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part456.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part457.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part458.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part459.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part460.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part461.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part462.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part463.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part464.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part465.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part466.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part467.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part468.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part469.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part470.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part471.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part472.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part473.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part474.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part475.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part476.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part477.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part478.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part479.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part480.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part481.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part482.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part483.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part484.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part485.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part486.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part487.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part488.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part489.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part490.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part491.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part492.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part493.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part494.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part495.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part496.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part497.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part498.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part499.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part500.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part501.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part502.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part503.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part504.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part505.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part506.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part507.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part508.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part509.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part510.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part511.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part512.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part513.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part514.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part515.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part516.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part517.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part518.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part519.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part520.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part521.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part522.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part523.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part524.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part525.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part526.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part527.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part528.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part529.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part530.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part531.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part532.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part533.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part534.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part535.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part536.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part537.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part538.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part539.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part540.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part541.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part542.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part543.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part544.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part545.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part546.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part547.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part548.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part549.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part550.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part551.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part552.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part553.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part554.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part555.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part556.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part557.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part558.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part559.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part560.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part561.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part562.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part563.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part564.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part565.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part566.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part567.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part568.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part569.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part570.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part571.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part572.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part573.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part574.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part575.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part576.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part577.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part578.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part579.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part580.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part581.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part582.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part583.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part584.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part585.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part586.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part587.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part588.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part589.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part590.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part591.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part592.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part593.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part594.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part595.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part596.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part597.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part598.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part599.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part600.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part601.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part602.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part603.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part604.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part605.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part606.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part607.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part608.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part609.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part610.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part611.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part612.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part613.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part614.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part615.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part616.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part617.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part618.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part619.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part620.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part621.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part622.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part623.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part624.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part625.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part626.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part627.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part628.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part629.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part630.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part631.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part632.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part633.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part634.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part635.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part636.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part637.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part638.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part639.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part640.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part641.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part642.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part643.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part644.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part645.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part646.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part647.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part648.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part649.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part650.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part651.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part652.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part653.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part654.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part655.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part656.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part657.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part658.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part659.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part660.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part661.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part662.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part663.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part664.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part665.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part666.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part667.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part668.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part669.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part670.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part671.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part672.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part673.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part674.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part675.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part676.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part677.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part678.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part679.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part680.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part681.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part682.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part683.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part684.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part685.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part686.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part687.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part688.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part689.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part690.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part691.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part692.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part693.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part694.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part695.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part696.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part697.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part698.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part699.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part700.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part701.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part702.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part703.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part704.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part705.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part706.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part707.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part708.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part709.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part710.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part711.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part712.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part713.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part714.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part715.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part716.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part717.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part718.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part719.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part720.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part721.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part722.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part723.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part724.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part725.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part726.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part727.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part728.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part729.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part730.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part731.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part732.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part733.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part734.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part735.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part736.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part737.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part738.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part739.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part740.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part741.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part742.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part743.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part744.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part745.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part746.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part747.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part748.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part749.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part750.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part751.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part752.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part753.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part754.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part755.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part756.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part757.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part758.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part759.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part760.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part761.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part762.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part763.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part764.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part765.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part766.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part767.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part768.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part769.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part770.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part771.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part772.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part773.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part774.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part775.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part776.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part777.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part778.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part779.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part780.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part781.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part782.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part783.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part784.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part785.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part786.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part787.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part788.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part789.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part790.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part791.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part792.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part793.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part794.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part795.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part796.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part797.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part798.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part799.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part800.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part801.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part802.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part803.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part804.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part805.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part806.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part807.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part808.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part809.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part810.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part811.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part812.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part813.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part814.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part815.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part816.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part817.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part818.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part819.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part820.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part821.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part822.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part823.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part824.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part825.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part826.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part827.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part828.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part829.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part830.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part831.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part832.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part833.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part834.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part835.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part836.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part837.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part838.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part839.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part840.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part841.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part842.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part843.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part844.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part845.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part846.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part847.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part848.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part849.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part850.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part851.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part852.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part853.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part854.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part855.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part856.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part857.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part858.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part859.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part860.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part861.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part862.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part863.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part864.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part865.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part866.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part867.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part868.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part869.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part870.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part871.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part872.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part873.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part874.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part875.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part876.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part877.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part878.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part879.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part880.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part881.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part882.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part883.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part884.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part885.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part886.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part887.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part888.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part889.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part890.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part891.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part892.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part893.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part894.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part895.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part896.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part897.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part898.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part899.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part900.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part901.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part902.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part903.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part904.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part905.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part906.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part907.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part908.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part909.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part910.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part911.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part912.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part913.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part914.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part915.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part916.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part917.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part918.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part919.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part920.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part921.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part922.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part923.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part924.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part925.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part926.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part927.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part928.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part929.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part930.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part931.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part932.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part933.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part934.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part935.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part936.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part937.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part938.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part939.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part940.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part941.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part942.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part943.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part944.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part945.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part946.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part947.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part948.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part949.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part950.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part951.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part952.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part953.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part954.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part955.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part956.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part957.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part958.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part959.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part960.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part961.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part962.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part963.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part964.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part965.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part966.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part967.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part968.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part969.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part970.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part971.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part972.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part973.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part974.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part975.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part976.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part977.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part978.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part979.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part980.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part981.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part982.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part983.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part984.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part985.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part986.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part987.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part988.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part989.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part990.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part991.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part992.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part993.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part994.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part995.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part996.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part997.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part998.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part999.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1000.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1001.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1002.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1003.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1004.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1005.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1006.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1007.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1008.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1009.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1010.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1011.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1012.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1013.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1014.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1015.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1016.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1017.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1018.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1019.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1020.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1021.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1022.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1023.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1024.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1025.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1026.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1027.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1028.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1029.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1030.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1031.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1032.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1033.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1034.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1035.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1036.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1037.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1038.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1039.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1040.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1041.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1042.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1043.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1044.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1045.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1046.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1047.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1048.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1049.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1050.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1051.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1052.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1053.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1054.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1055.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1056.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1057.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1058.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1059.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1060.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1061.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1062.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1063.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1064.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1065.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1066.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1067.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1068.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1069.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1070.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1071.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1072.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1073.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1074.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1075.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1076.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1077.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1078.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1079.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1080.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1081.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1082.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1083.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1084.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1085.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1086.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1087.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1088.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1089.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1090.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1091.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1092.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1093.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1094.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1095.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1096.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1097.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1098.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1099.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1100.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1101.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1102.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1103.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1104.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1105.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1106.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1107.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1108.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1109.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1110.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1111.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1112.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1113.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1114.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1115.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1116.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1117.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1118.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1119.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1120.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1121.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1122.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1123.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1124.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1125.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1126.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1127.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1128.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1129.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1130.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1131.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1132.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1133.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1134.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1135.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1136.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1137.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1138.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1139.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1140.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1141.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1142.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1143.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1144.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1145.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1146.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1147.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1148.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1149.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1150.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1151.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1152.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1153.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1154.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1155.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1156.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1157.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1158.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1159.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1160.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1161.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1162.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1163.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1164.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1165.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1166.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1167.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1168.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1169.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1170.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1171.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1172.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1173.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1174.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1175.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1176.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1177.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1178.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1179.h>
		PUBLIC <${PROJECT_NAME}/il2cpp_internals/headers/il2cpp_internals_part1180.h>
)

message(STATUS "Assigning source groups.")

message(STATUS "test ${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES};${INTERNAL_IL2CPP_HEADERS}")
set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES};${INTERNAL_IL2CPP_HEADERS}")
set_vc_structure_with_prefix("_project_settings" "${CMAKE_CURRENT_SOURCE_DIR}" "${MISC_FILES};")

message(STATUS "TESTING ${PROJECT_BINARY_DIR}")

source_group("_precompiled_headers"
	FILES
		${PROJECT_BINARY_DIR}/CMakeFiles/Il2CppModLoader.dir/Debug/cmake_pch.hxx
		${PROJECT_BINARY_DIR}/CMakeFiles/Il2CppModLoader.dir/MinSizeRel/cmake_pch.hxx
		${PROJECT_BINARY_DIR}/CMakeFiles/Il2CppModLoader.dir/RelWithDebInfo/cmake_pch.hxx
		${PROJECT_BINARY_DIR}/CMakeFiles/Il2CppModLoader.dir/Release/cmake_pch.hxx
		${PROJECT_BINARY_DIR}/CMakeFiles/Il2CppModLoader.dir/cmake_pch.cxx
)

install(
	TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
	LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
	ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)
