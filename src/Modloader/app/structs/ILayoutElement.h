#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILayoutElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILayoutElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayoutElement_DEFINED)
#define IL2CPP_STRUCT_ILayoutElement_DEFINED
struct ILayoutElement__Class;
struct ILayoutElement {
    struct ILayoutElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILayoutElement_FWDDECL)
#define IL2CPP_STRUCT_ILayoutElement_FWDDECL
#include <Modloader/app/structs/ILayoutElement__Class.h>
#endif
#undef IL2CPP_STRUCT_ILayoutElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayoutElement_DEFINED) && !defined(IL2CPP_STRUCT_ILayoutElement_FWDDECL)
#include <Modloader/app/structs/ILayoutElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILayoutElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
