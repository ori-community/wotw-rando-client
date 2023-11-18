#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RegexTree.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/RegexNode.h>
#include <Modloader/app/structs/RegexOptions__Enum.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Text::RegularExpressions::RegexTree {
    IL2CPP_REGISTER_METHOD(0x02A78D20, void, ctor, (app::RegexTree * this_ptr, app::RegexNode* root, app::Hashtable* caps, app::Int32__Array* capnumlist, int32_t captop, app::Hashtable* capnames, app::String__Array* capslist, app::RegexOptions__Enum opts))
}
