#ifndef _AUTO_BANDAGE_H
#define _AUTO_BANDAGE_H

//#define VISIBLE_AUTO_BANDAGE

void AutoBandage( BOOLEAN fStart );
void BeginAutoBandage( );

BOOLEAN HandleAutoBandage( );

void ShouldBeginAutoBandage( );

void SetAutoBandagePending( BOOLEAN fSet );
void HandleAutoBandagePending( );

// ste the autobandage as complete
void SetAutoBandageComplete( void );

#endif