#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DllImportAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DllImportAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DllImportAttribute__Fields_DEFINED)
#include <Modloader/app/structs/CallingConvention__Enum.h>
#include <Modloader/app/structs/CharSet__Enum.h>
#if defined(IL2CPP_STRUCT_CharSet__Enum_DEFINED) && defined(IL2CPP_STRUCT_CallingConvention__Enum_DEFINED)
#define IL2CPP_STRUCT_DllImportAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) DllImportAttribute__Fields {
    struct String* _val;
    struct String* EntryPoint;
    CharSet__Enum CharSet;

    bool SetLastError;
    bool ExactSpelling;
    bool PreserveSig;
    CallingConvention__Enum CallingConvention;

    bool BestFitMapping;
    bool ThrowOnUnmappableChar;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DllImportAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_DllImportAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DllImportAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DllImportAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DllImportAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/DllImportAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DllImportAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
