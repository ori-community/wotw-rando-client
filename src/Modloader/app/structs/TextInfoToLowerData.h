#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextInfoToLowerData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextInfoToLowerData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextInfoToLowerData_DEFINED)
#define IL2CPP_STRUCT_TextInfoToLowerData_DEFINED
struct TextInfoToLowerData__Class;
struct TextInfoToLowerData {
    struct TextInfoToLowerData__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TextInfoToLowerData_FWDDECL)
#define IL2CPP_STRUCT_TextInfoToLowerData_FWDDECL
#include <Modloader/app/structs/TextInfoToLowerData__Class.h>
#endif
#undef IL2CPP_STRUCT_TextInfoToLowerData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextInfoToLowerData_DEFINED) && !defined(IL2CPP_STRUCT_TextInfoToLowerData_FWDDECL)
#include <Modloader/app/structs/TextInfoToLowerData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextInfoToLowerData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
