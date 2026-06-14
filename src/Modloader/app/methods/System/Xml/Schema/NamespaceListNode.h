#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/BitSet__Array.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/InteriorNode.h>
#include <Modloader/app/structs/NamespaceList.h>
#include <Modloader/app/structs/NamespaceListNode.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Positions.h>
#include <Modloader/app/structs/SymbolsDictionary.h>

namespace app::classes::System::Xml::Schema::NamespaceListNode {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, app::NamespaceListNode* this_ptr, app::NamespaceList* namespace_list, app::Object* particle)
    IL2CPP_REGISTER_METHOD(0x016CFAA0, app::ICollection*, GetResolvedSymbols, app::NamespaceListNode* this_ptr, app::SymbolsDictionary* symbols)
    IL2CPP_REGISTER_METHOD(
        0x016CFAD0,
        void,
        ExpandTree,
        app::NamespaceListNode* this_ptr,
        app::InteriorNode* parent,
        app::SymbolsDictionary* symbols,
        app::Positions* positions
    )
    IL2CPP_REGISTER_METHOD(
        0x016CFF80,
        void,
        ConstructPos,
        app::NamespaceListNode* this_ptr,
        app::BitSet* firstpos,
        app::BitSet* lastpos,
        app::BitSet__Array* followpos
    )
    IL2CPP_REGISTER_METHOD(0x016CFFD0, bool, get_IsNullable, app::NamespaceListNode* this_ptr)
} // namespace app::classes::System::Xml::Schema::NamespaceListNode
