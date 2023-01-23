#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FSharpFunction.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/MethodCall_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::Newtonsoft::Json::Utilities::FSharpFunction {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::FSharpFunction * this_ptr, app::Object* instance, app::MethodCall_2_System_Object_System_Object_* invoker))
    IL2CPP_REGISTER_METHOD(0x01C116B0, app::Object*, Invoke, (app::FSharpFunction * this_ptr, app::Object__Array* args))
} // namespace app::classes::Newtonsoft::Json::Utilities::FSharpFunction
