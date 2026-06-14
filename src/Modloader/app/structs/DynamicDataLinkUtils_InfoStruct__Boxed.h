#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct__Boxed_DEFINED)
#include <Modloader/app/structs/DynamicDataLinkUtils_InfoStruct.h>
#if defined(IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct_DEFINED)
#define IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct__Boxed_DEFINED
struct DynamicDataLinkUtils_InfoStruct__Class;
struct DynamicDataLinkUtils_InfoStruct__Boxed {
    struct DynamicDataLinkUtils_InfoStruct__Class* klass;
    MonitorData* monitor;
    struct DynamicDataLinkUtils_InfoStruct fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct__Boxed_FWDDECL)
#define IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct__Boxed_FWDDECL
#include <Modloader/app/structs/DynamicDataLinkUtils_InfoStruct__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct__Boxed_FWDDECL)
#include <Modloader/app/structs/DynamicDataLinkUtils_InfoStruct__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicDataLinkUtils_InfoStruct__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
