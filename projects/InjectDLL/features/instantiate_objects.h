#include <macros.h>
#include <string>

INJECT_C_DLLEXPORT void teleport(float x, float y, bool wait_for_load);
using loaded_callback = void(*)();

void force_load_area(std::string name, loaded_callback callback);
void perform_preload();
