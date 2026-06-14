#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XStreamingElement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XStreamingElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XStreamingElement__Fields_DEFINED)
#define IL2CPP_STRUCT_XStreamingElement__Fields_DEFINED
struct XName;
struct Object;
struct __declspec(align(8)) XStreamingElement__Fields {
    struct XName* name;
    struct Object* content;
};
#endif
#if !defined(IL2CPP_STRUCT_XStreamingElement__Fields_FWDDECL)
#define IL2CPP_STRUCT_XStreamingElement__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XName.h>
#endif
#undef IL2CPP_STRUCT_XStreamingElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XStreamingElement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XStreamingElement__Fields_FWDDECL)
#include <Modloader/app/structs/XStreamingElement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XStreamingElement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
