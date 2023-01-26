#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpressionParser_ReservedWords__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Tokens__Enum.h>

namespace app::classes::System::Data::ExpressionParser_ReservedWords {
    IL2CPP_REGISTER_METHOD(0x001DA0C0, void, ctor, (app::ExpressionParser_ReservedWords__Boxed * this_ptr, app::String* word, app::Tokens__Enum token, int32_t op))
}
