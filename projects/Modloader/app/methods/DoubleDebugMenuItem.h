#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DoubleDebugMenuItem.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Func_1_Double_.h>
#include <Modloader/app/structs/Action_1_Double_.h>

namespace app::classes::DoubleDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x00BDB720, void, ctor_1, (app::DoubleDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDB7A0, void, ctor_2, (app::DoubleDebugMenuItem * this_ptr, app::String* path, app::String* text))
    IL2CPP_REGISTER_METHOD(0x00BDB880, void, ctor_3, (app::DoubleDebugMenuItem * this_ptr, app::String* path, app::String* text, app::Func_1_Double_* getter, app::Action_1_Double_* setter, double min, double max, double speed, app::String* help))
    IL2CPP_REGISTER_METHOD(0x00BDB9A0, void, IncrementValue, (app::DoubleDebugMenuItem * this_ptr, int32_t delta))
} // namespace app::classes::DoubleDebugMenuItem
