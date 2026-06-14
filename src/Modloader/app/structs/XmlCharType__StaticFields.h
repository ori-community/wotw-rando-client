#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlCharType__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlCharType__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCharType__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XmlCharType__StaticFields_DEFINED
struct Object;
struct Byte__Array;
struct XmlCharType__StaticFields {
    struct Object* s_Lock;
    struct Byte__Array* s_CharProperties;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlCharType__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XmlCharType__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_XmlCharType__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCharType__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XmlCharType__StaticFields_FWDDECL)
#include <Modloader/app/structs/XmlCharType__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlCharType__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
