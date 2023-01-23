#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalEncodingDataItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalEncodingDataItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalEncodingDataItem_DEFINED)
#define IL2CPP_STRUCT_InternalEncodingDataItem_DEFINED
struct String;
struct InternalEncodingDataItem {
    struct String* webName;
    uint16_t codePage;
};
#endif
#if !defined(IL2CPP_STRUCT_InternalEncodingDataItem_FWDDECL)
#define IL2CPP_STRUCT_InternalEncodingDataItem_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_InternalEncodingDataItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalEncodingDataItem_DEFINED) && !defined(IL2CPP_STRUCT_InternalEncodingDataItem_FWDDECL)
#include <Modloader/app/structs/InternalEncodingDataItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalEncodingDataItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
