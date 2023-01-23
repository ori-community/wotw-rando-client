#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPrewarmable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPrewarmable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPrewarmable_DEFINED)
#define IL2CPP_STRUCT_IPrewarmable_DEFINED
struct IPrewarmable__Class;
struct IPrewarmable {
    struct IPrewarmable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPrewarmable_FWDDECL)
#define IL2CPP_STRUCT_IPrewarmable_FWDDECL
#include <Modloader/app/structs/IPrewarmable__Class.h>
#endif
#undef IL2CPP_STRUCT_IPrewarmable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPrewarmable_DEFINED) && !defined(IL2CPP_STRUCT_IPrewarmable_FWDDECL)
#include <Modloader/app/structs/IPrewarmable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPrewarmable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
