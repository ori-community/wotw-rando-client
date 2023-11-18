#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SequenceNode_SequenceConstructPosContext__Boxed.h>
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/SequenceNode.h>

namespace app::classes::System::Xml::Schema::SequenceNode_SequenceConstructPosContext {
    IL2CPP_REGISTER_METHOD(0x0018F7B0, void, ctor, (app::SequenceNode_SequenceConstructPosContext__Boxed * this_ptr, app::SequenceNode* node, app::BitSet* firstpos, app::BitSet* lastpos))
}
