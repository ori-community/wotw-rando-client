#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumTools__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumTools__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumTools__StaticFields_DEFINED)
#define IL2CPP_STRUCT_EnumTools__StaticFields_DEFINED
struct EnumTools__StaticFields {
    int32_t s_UIntSize;
    int32_t s_ULongSize;
    int32_t s_ByteSize;
};
#endif
#if !defined(IL2CPP_STRUCT_EnumTools__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EnumTools__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_EnumTools__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumTools__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EnumTools__StaticFields_FWDDECL)
#include <Modloader/app/structs/EnumTools__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumTools__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
