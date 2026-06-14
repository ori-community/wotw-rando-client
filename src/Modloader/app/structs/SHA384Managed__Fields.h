#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA384Managed__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA384Managed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA384Managed__Fields_DEFINED)
#include <Modloader/app/structs/SHA384__Fields.h>
#if defined(IL2CPP_STRUCT_SHA384__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA384Managed__Fields_DEFINED
struct Byte__Array;
struct UInt64__Array;
struct SHA384Managed__Fields {
    struct SHA384__Fields _;
    struct Byte__Array* _buffer;
    uint64_t _count;
    struct UInt64__Array* _stateSHA384;
    struct UInt64__Array* _W;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SHA384Managed__Fields_FWDDECL)
#define IL2CPP_STRUCT_SHA384Managed__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>
#endif
#undef IL2CPP_STRUCT_SHA384Managed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA384Managed__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SHA384Managed__Fields_FWDDECL)
#include <Modloader/app/structs/SHA384Managed__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA384Managed__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
