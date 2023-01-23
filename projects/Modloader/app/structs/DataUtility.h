#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataUtility_DEFINED)
#define IL2CPP_STRUCT_DataUtility_DEFINED
struct DataUtility__Class;
struct DataUtility {
    struct DataUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DataUtility_FWDDECL)
#define IL2CPP_STRUCT_DataUtility_FWDDECL
#include <Modloader/app/structs/DataUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_DataUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataUtility_DEFINED) && !defined(IL2CPP_STRUCT_DataUtility_FWDDECL)
#include <Modloader/app/structs/DataUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
