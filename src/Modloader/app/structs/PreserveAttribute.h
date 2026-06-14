#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreserveAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreserveAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreserveAttribute_DEFINED)
#define IL2CPP_STRUCT_PreserveAttribute_DEFINED
struct PreserveAttribute__Class;
struct PreserveAttribute {
    struct PreserveAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PreserveAttribute_FWDDECL)
#define IL2CPP_STRUCT_PreserveAttribute_FWDDECL
#include <Modloader/app/structs/PreserveAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_PreserveAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreserveAttribute_DEFINED) && !defined(IL2CPP_STRUCT_PreserveAttribute_FWDDECL)
#include <Modloader/app/structs/PreserveAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreserveAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
