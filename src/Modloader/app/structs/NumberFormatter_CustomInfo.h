#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NumberFormatter_CustomInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NumberFormatter_CustomInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatter_CustomInfo_DEFINED)
#include <Modloader/app/structs/NumberFormatter_CustomInfo__Fields.h>
#if defined(IL2CPP_STRUCT_NumberFormatter_CustomInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_NumberFormatter_CustomInfo_DEFINED
struct NumberFormatter_CustomInfo__Class;
struct NumberFormatter_CustomInfo {
    struct NumberFormatter_CustomInfo__Class* klass;
    MonitorData* monitor;
    struct NumberFormatter_CustomInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NumberFormatter_CustomInfo_FWDDECL)
#define IL2CPP_STRUCT_NumberFormatter_CustomInfo_FWDDECL
#include <Modloader/app/structs/NumberFormatter_CustomInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_NumberFormatter_CustomInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberFormatter_CustomInfo_DEFINED) && !defined(IL2CPP_STRUCT_NumberFormatter_CustomInfo_FWDDECL)
#include <Modloader/app/structs/NumberFormatter_CustomInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NumberFormatter_CustomInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
