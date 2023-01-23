#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Attributes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Attributes_INITIALIZING
#if !defined(IL2CPP_STRUCT_Attributes_DEFINED)
#include <Modloader/app/structs/Attributes__Fields.h>
#if defined(IL2CPP_STRUCT_Attributes__Fields_DEFINED)
#define IL2CPP_STRUCT_Attributes_DEFINED
struct Attributes__Class;
struct Attributes {
    struct Attributes__Class* klass;
    MonitorData* monitor;
    struct Attributes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Attributes_FWDDECL)
#define IL2CPP_STRUCT_Attributes_FWDDECL
#include <Modloader/app/structs/Attributes__Class.h>
#endif
#undef IL2CPP_STRUCT_Attributes_INITIALIZING
#if !defined(IL2CPP_STRUCT_Attributes_DEFINED) && !defined(IL2CPP_STRUCT_Attributes_FWDDECL)
#include <Modloader/app/structs/Attributes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Attributes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
