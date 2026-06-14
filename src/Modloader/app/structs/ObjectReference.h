#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectReference_DEFINED)
#include <Modloader/app/structs/ObjectReference__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectReference__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectReference_DEFINED
struct ObjectReference__Class;
struct ObjectReference {
    struct ObjectReference__Class* klass;
    MonitorData* monitor;
    struct ObjectReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectReference_FWDDECL)
#define IL2CPP_STRUCT_ObjectReference_FWDDECL
#include <Modloader/app/structs/ObjectReference__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectReference_DEFINED) && !defined(IL2CPP_STRUCT_ObjectReference_FWDDECL)
#include <Modloader/app/structs/ObjectReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
