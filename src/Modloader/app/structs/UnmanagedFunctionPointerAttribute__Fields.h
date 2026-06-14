#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute__Fields_DEFINED)
#include <Modloader/app/structs/CallingConvention__Enum.h>
#include <Modloader/app/structs/CharSet__Enum.h>
#if defined(IL2CPP_STRUCT_CallingConvention__Enum_DEFINED) && defined(IL2CPP_STRUCT_CharSet__Enum_DEFINED)
#define IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute__Fields_DEFINED
struct __declspec(align(8)) UnmanagedFunctionPointerAttribute__Fields {
    CallingConvention__Enum m_callingConvention;

    CharSet__Enum CharSet;

    bool BestFitMapping;
    bool ThrowOnUnmappableChar;
    bool SetLastError;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/UnmanagedFunctionPointerAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnmanagedFunctionPointerAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
