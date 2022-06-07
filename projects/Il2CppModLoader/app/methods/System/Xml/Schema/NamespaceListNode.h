#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::NamespaceListNode {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::NamespaceListNode * this_ptr, app::NamespaceList * namespace_list, app::Object * particle))
    IL2CPP_REGISTER_METHOD(0x016CFAA0, app::ICollection *, GetResolvedSymbols, (app::NamespaceListNode * this_ptr, app::SymbolsDictionary * symbols))
    IL2CPP_REGISTER_METHOD(0x016CFAD0, void, ExpandTree, (app::NamespaceListNode * this_ptr, app::InteriorNode * parent, app::SymbolsDictionary * symbols, app::Positions * positions))
    IL2CPP_REGISTER_METHOD(0x016CFF80, void, ConstructPos, (app::NamespaceListNode * this_ptr, app::BitSet * firstpos, app::BitSet * lastpos, app::BitSet__Array * followpos))
    IL2CPP_REGISTER_METHODINFO(0x04784C00, NamespaceListNode_ConstructPos__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016CFFD0, bool, get_IsNullable, (app::NamespaceListNode * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04745E70, NamespaceListNode_get_IsNullable__MethodInfo)
}
