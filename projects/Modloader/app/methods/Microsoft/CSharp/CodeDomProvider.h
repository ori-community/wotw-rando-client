#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CodeDomProvider.h>

namespace app::classes::Microsoft::CSharp::CodeDomProvider {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CodeDomProvider* this_ptr)
}
