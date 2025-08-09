#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompilationRelaxationsAttribute.h>
#include <Modloader/app/structs/CompilationRelaxations__Enum.h>

namespace app::classes::System::Runtime::CompilerServices::CompilationRelaxationsAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor_1, app::CompilationRelaxationsAttribute* this_ptr, int32_t relaxations)
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor_2, app::CompilationRelaxationsAttribute* this_ptr, app::CompilationRelaxations__Enum relaxations)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_CompilationRelaxations, app::CompilationRelaxationsAttribute* this_ptr)
} // namespace app::classes::System::Runtime::CompilerServices::CompilationRelaxationsAttribute
