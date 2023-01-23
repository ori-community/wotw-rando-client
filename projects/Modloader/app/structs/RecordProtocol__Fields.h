#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordProtocol__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordProtocol__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordProtocol__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordProtocol__Fields_DEFINED
struct Stream;
struct Context_1;
struct __declspec(align(8)) RecordProtocol__Fields {
    struct Stream* innerStream;
    struct Context_1* context;
};
#endif
#if !defined(IL2CPP_STRUCT_RecordProtocol__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecordProtocol__Fields_FWDDECL
#include <Modloader/app/structs/Context_1.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_RecordProtocol__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordProtocol__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecordProtocol__Fields_FWDDECL)
#include <Modloader/app/structs/RecordProtocol__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordProtocol__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
