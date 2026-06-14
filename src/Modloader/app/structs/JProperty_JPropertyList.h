#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JProperty_JPropertyList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JProperty_JPropertyList_INITIALIZING
#if !defined(IL2CPP_STRUCT_JProperty_JPropertyList_DEFINED)
#include <Modloader/app/structs/JProperty_JPropertyList__Fields.h>
#if defined(IL2CPP_STRUCT_JProperty_JPropertyList__Fields_DEFINED)
#define IL2CPP_STRUCT_JProperty_JPropertyList_DEFINED
struct JProperty_JPropertyList__Class;
struct JProperty_JPropertyList {
    struct JProperty_JPropertyList__Class* klass;
    MonitorData* monitor;
    struct JProperty_JPropertyList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JProperty_JPropertyList_FWDDECL)
#define IL2CPP_STRUCT_JProperty_JPropertyList_FWDDECL
#include <Modloader/app/structs/JProperty_JPropertyList__Class.h>
#endif
#undef IL2CPP_STRUCT_JProperty_JPropertyList_INITIALIZING
#if !defined(IL2CPP_STRUCT_JProperty_JPropertyList_DEFINED) && !defined(IL2CPP_STRUCT_JProperty_JPropertyList_FWDDECL)
#include <Modloader/app/structs/JProperty_JPropertyList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JProperty_JPropertyList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
