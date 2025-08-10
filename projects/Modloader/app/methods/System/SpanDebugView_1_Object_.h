#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ReadOnlySpan_1_Object_.h>
#include <Modloader/app/structs/SpanDebugView_1_Object_.h>
#include <Modloader/app/structs/Span_1_Object_.h>

namespace app::classes::System::SpanDebugView_1_Object_ {
    IL2CPP_REGISTER_METHOD(0x02773E70, app::Object__Array*, get_Items, app::SpanDebugView_1_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02773DE0, void, ctor_1, app::SpanDebugView_1_Object_* this_ptr, app::Span_1_Object_ collection)
    IL2CPP_REGISTER_METHOD(0x02773DE0, void, ctor_2, app::SpanDebugView_1_Object_* this_ptr, app::ReadOnlySpan_1_Object_ collection)
} // namespace app::classes::System::SpanDebugView_1_Object_
