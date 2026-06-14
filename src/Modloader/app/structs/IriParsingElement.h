#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IriParsingElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IriParsingElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_IriParsingElement_DEFINED)
#define IL2CPP_STRUCT_IriParsingElement_DEFINED
struct IriParsingElement__Class;
struct IriParsingElement {
    struct IriParsingElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IriParsingElement_FWDDECL)
#define IL2CPP_STRUCT_IriParsingElement_FWDDECL
#include <Modloader/app/structs/IriParsingElement__Class.h>
#endif
#undef IL2CPP_STRUCT_IriParsingElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_IriParsingElement_DEFINED) && !defined(IL2CPP_STRUCT_IriParsingElement_FWDDECL)
#include <Modloader/app/structs/IriParsingElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IriParsingElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
