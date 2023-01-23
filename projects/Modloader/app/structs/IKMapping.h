#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKMapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMapping_DEFINED)
#define IL2CPP_STRUCT_IKMapping_DEFINED
struct IKMapping__Class;
struct IKMapping {
    struct IKMapping__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IKMapping_FWDDECL)
#define IL2CPP_STRUCT_IKMapping_FWDDECL
#include <Modloader/app/structs/IKMapping__Class.h>
#endif
#undef IL2CPP_STRUCT_IKMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMapping_DEFINED) && !defined(IL2CPP_STRUCT_IKMapping_FWDDECL)
#include <Modloader/app/structs/IKMapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKMapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
