#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MACTripleDES__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MACTripleDES__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MACTripleDES__Fields_DEFINED)
#include <Modloader/app/structs/KeyedHashAlgorithm__Fields.h>
#if defined(IL2CPP_STRUCT_KeyedHashAlgorithm__Fields_DEFINED)
#define IL2CPP_STRUCT_MACTripleDES__Fields_DEFINED
struct ICryptoTransform;
struct CryptoStream;
struct TailStream;
struct TripleDES;
struct MACTripleDES__Fields {
    struct KeyedHashAlgorithm__Fields _;
    struct ICryptoTransform* m_encryptor;
    struct CryptoStream* _cs_1;
    struct TailStream* _ts;
    int32_t m_bytesPerBlock;
    struct TripleDES* des;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MACTripleDES__Fields_FWDDECL)
#define IL2CPP_STRUCT_MACTripleDES__Fields_FWDDECL
#include <Modloader/app/structs/CryptoStream.h>
#include <Modloader/app/structs/ICryptoTransform.h>
#include <Modloader/app/structs/TailStream.h>
#include <Modloader/app/structs/TripleDES.h>
#endif
#undef IL2CPP_STRUCT_MACTripleDES__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MACTripleDES__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MACTripleDES__Fields_FWDDECL)
#include <Modloader/app/structs/MACTripleDES__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MACTripleDES__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
