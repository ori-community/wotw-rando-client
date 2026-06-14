#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Asttree.h>
#include <Modloader/app/structs/ConstraintStruct.h>
#include <Modloader/app/structs/KeySequence.h>
#include <Modloader/app/structs/SelectorActiveAxis.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Schema::SelectorActiveAxis {
    IL2CPP_REGISTER_METHOD(0x01AB90E0, int32_t, get_lastDepth, app::SelectorActiveAxis* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01AB9220, void, ctor, app::SelectorActiveAxis* this_ptr, app::Asttree* axis_tree, app::ConstraintStruct* cs)
    IL2CPP_REGISTER_METHOD(0x01AB9380, bool, EndElement, app::SelectorActiveAxis* this_ptr, app::String* localname, app::String* u_r_n)
    IL2CPP_REGISTER_METHOD(0x01AB93D0, int32_t, PushKS, app::SelectorActiveAxis* this_ptr, int32_t errline, int32_t errcol)
    IL2CPP_REGISTER_METHOD(0x01AB9B40, app::KeySequence*, PopKS, app::SelectorActiveAxis* this_ptr)
} // namespace app::classes::System::Xml::Schema::SelectorActiveAxis
