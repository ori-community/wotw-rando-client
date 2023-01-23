#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KSStruct.h>
#include <Modloader/app/structs/KeySequence.h>

namespace app::classes::System::Xml::Schema::KSStruct {
    IL2CPP_REGISTER_METHOD(0x016CC580, void, ctor, (app::KSStruct * this_ptr, app::KeySequence* ks, int32_t dim))
}
