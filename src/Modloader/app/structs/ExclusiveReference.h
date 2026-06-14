#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExclusiveReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExclusiveReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExclusiveReference_DEFINED)
#include <Modloader/app/structs/ExclusiveReference__Fields.h>
#if defined(IL2CPP_STRUCT_ExclusiveReference__Fields_DEFINED)
#define IL2CPP_STRUCT_ExclusiveReference_DEFINED
struct ExclusiveReference__Class;
struct ExclusiveReference {
    struct ExclusiveReference__Class* klass;
    MonitorData* monitor;
    struct ExclusiveReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExclusiveReference_FWDDECL)
#define IL2CPP_STRUCT_ExclusiveReference_FWDDECL
#include <Modloader/app/structs/ExclusiveReference__Class.h>
#endif
#undef IL2CPP_STRUCT_ExclusiveReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExclusiveReference_DEFINED) && !defined(IL2CPP_STRUCT_ExclusiveReference_FWDDECL)
#include <Modloader/app/structs/ExclusiveReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExclusiveReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
