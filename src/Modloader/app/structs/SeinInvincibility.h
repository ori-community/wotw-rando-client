#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinInvincibility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinInvincibility_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInvincibility_DEFINED)
#include <Modloader/app/structs/SeinInvincibility__Fields.h>
#if defined(IL2CPP_STRUCT_SeinInvincibility__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinInvincibility_DEFINED
struct SeinInvincibility__Class;
struct SeinInvincibility {
    struct SeinInvincibility__Class* klass;
    MonitorData* monitor;
    struct SeinInvincibility__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinInvincibility_FWDDECL)
#define IL2CPP_STRUCT_SeinInvincibility_FWDDECL
#include <Modloader/app/structs/SeinInvincibility__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinInvincibility_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInvincibility_DEFINED) && !defined(IL2CPP_STRUCT_SeinInvincibility_FWDDECL)
#include <Modloader/app/structs/SeinInvincibility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinInvincibility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
