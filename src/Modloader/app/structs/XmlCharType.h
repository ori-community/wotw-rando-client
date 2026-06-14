#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlCharType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlCharType_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCharType_DEFINED)
#define IL2CPP_STRUCT_XmlCharType_DEFINED
struct Byte__Array;
struct XmlCharType {
    struct Byte__Array* charProperties;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlCharType_FWDDECL)
#define IL2CPP_STRUCT_XmlCharType_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlCharType_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCharType_DEFINED) && !defined(IL2CPP_STRUCT_XmlCharType_FWDDECL)
#include <Modloader/app/structs/XmlCharType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlCharType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
