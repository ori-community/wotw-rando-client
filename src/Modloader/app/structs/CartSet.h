#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartSet_DEFINED)
#include <Modloader/app/structs/CartSet__Fields.h>
#if defined(IL2CPP_STRUCT_CartSet__Fields_DEFINED)
#define IL2CPP_STRUCT_CartSet_DEFINED
struct CartSet__Class;
struct CartSet {
    struct CartSet__Class* klass;
    MonitorData* monitor;
    struct CartSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartSet_FWDDECL)
#define IL2CPP_STRUCT_CartSet_FWDDECL
#include <Modloader/app/structs/CartSet__Class.h>
#endif
#undef IL2CPP_STRUCT_CartSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartSet_DEFINED) && !defined(IL2CPP_STRUCT_CartSet_FWDDECL)
#include <Modloader/app/structs/CartSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
