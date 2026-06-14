#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Threading::Volatile {
    IL2CPP_REGISTER_METHOD(0x0234B710, bool, Read_1, bool* location)
    IL2CPP_REGISTER_METHOD(0x0234B720, int32_t, Read_2, int32_t* location)
    IL2CPP_REGISTER_METHOD(0x0234B730, void, Write_1, int32_t* location, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0157AB60, app::Object*, Read_3, app::Object** location)
    IL2CPP_REGISTER_METHOD(0x015E1D30, void, Write_2, app::Object** location, app::Object* value)
} // namespace app::classes::System::Threading::Volatile
