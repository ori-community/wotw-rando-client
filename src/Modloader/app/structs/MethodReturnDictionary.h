#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodReturnDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodReturnDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodReturnDictionary_DEFINED)
#include <Modloader/app/structs/MethodReturnDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_MethodReturnDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodReturnDictionary_DEFINED
struct MethodReturnDictionary__Class;
struct MethodReturnDictionary {
    struct MethodReturnDictionary__Class* klass;
    MonitorData* monitor;
    struct MethodReturnDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MethodReturnDictionary_FWDDECL)
#define IL2CPP_STRUCT_MethodReturnDictionary_FWDDECL
#include <Modloader/app/structs/MethodReturnDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_MethodReturnDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodReturnDictionary_DEFINED) && !defined(IL2CPP_STRUCT_MethodReturnDictionary_FWDDECL)
#include <Modloader/app/structs/MethodReturnDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodReturnDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
