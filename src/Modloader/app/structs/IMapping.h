#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMapping_DEFINED)
#define IL2CPP_STRUCT_IMapping_DEFINED
struct IMapping__Class;
struct IMapping {
    struct IMapping__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMapping_FWDDECL)
#define IL2CPP_STRUCT_IMapping_FWDDECL
#include <Modloader/app/structs/IMapping__Class.h>
#endif
#undef IL2CPP_STRUCT_IMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMapping_DEFINED) && !defined(IL2CPP_STRUCT_IMapping_FWDDECL)
#include <Modloader/app/structs/IMapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
