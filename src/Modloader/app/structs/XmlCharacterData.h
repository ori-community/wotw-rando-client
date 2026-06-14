#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlCharacterData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlCharacterData_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCharacterData_DEFINED)
#include <Modloader/app/structs/XmlCharacterData__Fields.h>
#if defined(IL2CPP_STRUCT_XmlCharacterData__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlCharacterData_DEFINED
struct XmlCharacterData__Class;
struct XmlCharacterData {
    struct XmlCharacterData__Class* klass;
    MonitorData* monitor;
    struct XmlCharacterData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlCharacterData_FWDDECL)
#define IL2CPP_STRUCT_XmlCharacterData_FWDDECL
#include <Modloader/app/structs/XmlCharacterData__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlCharacterData_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCharacterData_DEFINED) && !defined(IL2CPP_STRUCT_XmlCharacterData_FWDDECL)
#include <Modloader/app/structs/XmlCharacterData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlCharacterData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
