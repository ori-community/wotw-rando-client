#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FriendAccessAllowedAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FriendAccessAllowedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendAccessAllowedAttribute_DEFINED)
#define IL2CPP_STRUCT_FriendAccessAllowedAttribute_DEFINED
struct FriendAccessAllowedAttribute__Class;
struct FriendAccessAllowedAttribute {
    struct FriendAccessAllowedAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FriendAccessAllowedAttribute_FWDDECL)
#define IL2CPP_STRUCT_FriendAccessAllowedAttribute_FWDDECL
#include <Modloader/app/structs/FriendAccessAllowedAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_FriendAccessAllowedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendAccessAllowedAttribute_DEFINED) && !defined(IL2CPP_STRUCT_FriendAccessAllowedAttribute_FWDDECL)
#include <Modloader/app/structs/FriendAccessAllowedAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FriendAccessAllowedAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
