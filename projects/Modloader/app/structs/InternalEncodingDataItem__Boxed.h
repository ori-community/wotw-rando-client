#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalEncodingDataItem__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalEncodingDataItem__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalEncodingDataItem__Boxed_DEFINED)
#include <Modloader/app/structs/InternalEncodingDataItem.h>
#if defined(IL2CPP_STRUCT_InternalEncodingDataItem_DEFINED)
#define IL2CPP_STRUCT_InternalEncodingDataItem__Boxed_DEFINED
struct InternalEncodingDataItem__Class;
struct InternalEncodingDataItem__Boxed {
    struct InternalEncodingDataItem__Class* klass;
    MonitorData* monitor;
    struct InternalEncodingDataItem fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InternalEncodingDataItem__Boxed_FWDDECL)
#define IL2CPP_STRUCT_InternalEncodingDataItem__Boxed_FWDDECL
#include <Modloader/app/structs/InternalEncodingDataItem__Class.h>
#endif
#undef IL2CPP_STRUCT_InternalEncodingDataItem__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalEncodingDataItem__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_InternalEncodingDataItem__Boxed_FWDDECL)
#include <Modloader/app/structs/InternalEncodingDataItem__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalEncodingDataItem__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
