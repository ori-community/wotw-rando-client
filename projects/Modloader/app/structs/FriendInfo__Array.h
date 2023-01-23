#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FriendInfo__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FriendInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendInfo__Array_DEFINED)
#define IL2CPP_STRUCT_FriendInfo__Array_DEFINED
struct FriendInfo__Array__Class;
struct FriendInfo;
struct FriendInfo__Array {
    struct FriendInfo__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct FriendInfo* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_FriendInfo__Array_FWDDECL)
#define IL2CPP_STRUCT_FriendInfo__Array_FWDDECL
#include <Modloader/app/structs/FriendInfo.h>
#include <Modloader/app/structs/FriendInfo__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_FriendInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendInfo__Array_DEFINED) && !defined(IL2CPP_STRUCT_FriendInfo__Array_FWDDECL)
#include <Modloader/app/structs/FriendInfo__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FriendInfo__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
