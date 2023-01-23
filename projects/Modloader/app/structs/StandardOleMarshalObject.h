#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StandardOleMarshalObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StandardOleMarshalObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandardOleMarshalObject_DEFINED)
#include <Modloader/app/structs/StandardOleMarshalObject__Fields.h>
#if defined(IL2CPP_STRUCT_StandardOleMarshalObject__Fields_DEFINED)
#define IL2CPP_STRUCT_StandardOleMarshalObject_DEFINED
struct StandardOleMarshalObject__Class;
struct StandardOleMarshalObject {
    struct StandardOleMarshalObject__Class* klass;
    MonitorData* monitor;
    struct StandardOleMarshalObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StandardOleMarshalObject_FWDDECL)
#define IL2CPP_STRUCT_StandardOleMarshalObject_FWDDECL
#include <Modloader/app/structs/StandardOleMarshalObject__Class.h>
#endif
#undef IL2CPP_STRUCT_StandardOleMarshalObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandardOleMarshalObject_DEFINED) && !defined(IL2CPP_STRUCT_StandardOleMarshalObject_FWDDECL)
#include <Modloader/app/structs/StandardOleMarshalObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StandardOleMarshalObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
