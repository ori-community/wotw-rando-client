#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RangeInt_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RangeInt_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeInt_DEFINED)
#define IL2CPP_STRUCT_RangeInt_DEFINED
struct RangeInt {
    int32_t start;
    int32_t length;
};
#endif
#if !defined(IL2CPP_STRUCT_RangeInt_FWDDECL)
#define IL2CPP_STRUCT_RangeInt_FWDDECL
#endif
#undef IL2CPP_STRUCT_RangeInt_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeInt_DEFINED) && !defined(IL2CPP_STRUCT_RangeInt_FWDDECL)
#include <Modloader/app/structs/RangeInt.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RangeInt.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
