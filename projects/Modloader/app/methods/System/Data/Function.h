#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FunctionId__Enum.h>
#include <Modloader/app/structs/Function_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Data::Function {
    IL2CPP_REGISTER_METHOD(
        0x01E329D0,
        void,
        ctor,
        app::Function_1* this_ptr,
        app::String* name,
        app::FunctionId__Enum id,
        app::Type* result,
        bool is_validate_arguments,
        bool is_variant_argument_list,
        int32_t argument_count,
        app::Type* a1,
        app::Type* a2,
        app::Type* a3
    )
    IL2CPP_REGISTER_METHOD(0x01E32C40, void, cctor, )
} // namespace app::classes::System::Data::Function
