#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComCompatibleVersionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComCompatibleVersionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComCompatibleVersionAttribute_DEFINED)
#include <Modloader/app/structs/ComCompatibleVersionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ComCompatibleVersionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ComCompatibleVersionAttribute_DEFINED
struct ComCompatibleVersionAttribute__Class;
struct ComCompatibleVersionAttribute {
    struct ComCompatibleVersionAttribute__Class* klass;
    MonitorData* monitor;
    struct ComCompatibleVersionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComCompatibleVersionAttribute_FWDDECL)
#define IL2CPP_STRUCT_ComCompatibleVersionAttribute_FWDDECL
#include <Modloader/app/structs/ComCompatibleVersionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ComCompatibleVersionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComCompatibleVersionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ComCompatibleVersionAttribute_FWDDECL)
#include <Modloader/app/structs/ComCompatibleVersionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComCompatibleVersionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
