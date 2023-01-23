#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayoutElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayoutElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayoutElement_DEFINED)
#include <Modloader/app/structs/LayoutElement__Fields.h>
#if defined(IL2CPP_STRUCT_LayoutElement__Fields_DEFINED)
#define IL2CPP_STRUCT_LayoutElement_DEFINED
struct LayoutElement__Class;
struct LayoutElement {
    struct LayoutElement__Class* klass;
    MonitorData* monitor;
    struct LayoutElement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LayoutElement_FWDDECL)
#define IL2CPP_STRUCT_LayoutElement_FWDDECL
#include <Modloader/app/structs/LayoutElement__Class.h>
#endif
#undef IL2CPP_STRUCT_LayoutElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayoutElement_DEFINED) && !defined(IL2CPP_STRUCT_LayoutElement_FWDDECL)
#include <Modloader/app/structs/LayoutElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayoutElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
