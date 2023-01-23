#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupInvitation__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupInvitation__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupInvitation__Array_DEFINED)
#define IL2CPP_STRUCT_GroupInvitation__Array_DEFINED
struct GroupInvitation__Array__Class;
struct GroupInvitation;
struct GroupInvitation__Array {
    struct GroupInvitation__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct GroupInvitation* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_GroupInvitation__Array_FWDDECL)
#define IL2CPP_STRUCT_GroupInvitation__Array_FWDDECL
#include <Modloader/app/structs/GroupInvitation.h>
#include <Modloader/app/structs/GroupInvitation__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupInvitation__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupInvitation__Array_DEFINED) && !defined(IL2CPP_STRUCT_GroupInvitation__Array_FWDDECL)
#include <Modloader/app/structs/GroupInvitation__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupInvitation__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
