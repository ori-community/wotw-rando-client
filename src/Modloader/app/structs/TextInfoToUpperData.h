#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextInfoToUpperData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextInfoToUpperData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextInfoToUpperData_DEFINED)
#define IL2CPP_STRUCT_TextInfoToUpperData_DEFINED
struct TextInfoToUpperData__Class;
struct TextInfoToUpperData {
    struct TextInfoToUpperData__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TextInfoToUpperData_FWDDECL)
#define IL2CPP_STRUCT_TextInfoToUpperData_FWDDECL
#include <Modloader/app/structs/TextInfoToUpperData__Class.h>
#endif
#undef IL2CPP_STRUCT_TextInfoToUpperData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextInfoToUpperData_DEFINED) && !defined(IL2CPP_STRUCT_TextInfoToUpperData_FWDDECL)
#include <Modloader/app/structs/TextInfoToUpperData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextInfoToUpperData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
