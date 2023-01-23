#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultilineAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultilineAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultilineAttribute_DEFINED)
#include <Modloader/app/structs/MultilineAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_MultilineAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_MultilineAttribute_DEFINED
struct MultilineAttribute__Class;
struct MultilineAttribute {
    struct MultilineAttribute__Class* klass;
    MonitorData* monitor;
    struct MultilineAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultilineAttribute_FWDDECL)
#define IL2CPP_STRUCT_MultilineAttribute_FWDDECL
#include <Modloader/app/structs/MultilineAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_MultilineAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultilineAttribute_DEFINED) && !defined(IL2CPP_STRUCT_MultilineAttribute_FWDDECL)
#include <Modloader/app/structs/MultilineAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultilineAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
